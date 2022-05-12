#pragma once

#include <vector>
#include <map>
#include "Camera.h"
#include "Light.h"
#include "Shape.h"
#include "Shader.h"
#include "FrameBuffer.h"
#include "Triangle.h"
#include "Vector3D.h"
#include "BVHNode.h"

#include <nlohmann/json.hpp>
using json = nlohmann::json;

class SceneContainer{
    public:

    bool usingBVH = false;
    sivelab::Vector3D m_background;
    std::vector <Camera*> m_allCameras;
    std::vector <Light*> m_allLights;
    std::vector <Shape*> m_allShapes;
    std::map <std::string, Shader*> shaderMap;
    BVHNode *root;

    SceneContainer(){

        m_background = sivelab::Vector3D(0.3,0.6,.9);
    };

    void initialize() 
    {
        root = new BVHNode(m_allShapes, 0);
    }

    void addCamera(Camera* &c){
        m_allCameras.push_back(c);
    }

    void addLight(Light* &l){
        m_allLights.push_back(l);
    }

    void addShape(Shape* &s){
        m_allShapes.push_back(s);
    }

    sivelab::Vector3D rayColor(Ray r, HitStruct &h, SceneContainer *scene, double tmin, double tmax, int depth){
        sivelab::Vector3D c(0,0,0);
        if(depth <= 0){
            return m_background;
        }
        else{
            bool hit = false;
            
            if(usingBVH){
                if(root->closestHit(r, tmin, tmax, h)){
                    hit = true;
                }
            }
            else{
                for(int i = 0; i < m_allShapes.size(); i++){
                    if(scene->m_allShapes[i]->closestHit(r, tmin, tmax, h)){
                        hit = true;
                    }
                }
            }
            if(hit){
                c = h.shader->apply(scene, h, depth);
            }
            else
                //sivelab::Vector3D(0,0,0);
                return m_background;
        }
        return c;
    }

    bool anyHit(const Ray &r, double tmin, double tmax){
        if(usingBVH){
                if(root->closestHit(r, tmin, tmax)){
                    return true;
                }
            }
        else{
            for(int i = 0; i < m_allShapes.size(); i++){
                if(m_allShapes[i]->closestHit(r, tmin, tmax)){
                    return true;
                }
            }
        }
        return false;
    }

     Shader* locateShader(const std::string &shaderData){
        return shaderMap[shaderData];
    }
    
    void parseJSONData(const std::string &filename);
    Shape *extractAndCreateShapeFromJSONData( json &shapeData );
};
