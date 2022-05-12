#include "Shader.h"
#include "HitStruct.h"
#include "Light.h"
#include "SceneContainer.h"
#include "Vector3D.h"


class BlinnPhong: public Shader{
    public:
    sivelab::Vector3D kd;
    sivelab::Vector3D ks;
    double phongExp;

    BlinnPhong(){
        kd = sivelab::Vector3D(0,0,0);
        ks = sivelab::Vector3D(0,0,0);
        phongExp = 1.0;
    }

    BlinnPhong(sivelab::Vector3D diffuse, sivelab::Vector3D specular, double p){
        kd = diffuse;
        ks = specular;
        phongExp = p;
    }

    sivelab::Vector3D apply(SceneContainer* scene, HitStruct &h, int depth);
};

/**
 * sivelab::Vector3D l = (scene->m_allLights[0]->m_position - h.pt) 
                    / (scene->m_allLights[0]->m_position - h.pt).length();
        double nDotL = h.normal.dot(l);
        //sivelab::Vector3D color = kd * max(0.0, nDotL);

        sivelab::Vector3D color(0,0,0);
        for(int k = 0; k < scene->m_allCameras.size(); k++){
            color += kd * scene->m_allLights[k]->intensity * max(0.0, nDotL);
        }
        return color;

 * half vector h = v + l / ||v + l|| 
 * v = view vector, ray direction inverted and normalized
 * Specular Compenent
 * + Ks (Specular reflection color) * Le (Light emitted value, compenent wise calculation) * max(0, n.dot(h))^p
 * p = phong exponent
 * 
 * color = 0,0,0
 * for all lights, li 
 *  color += Kd*Li->emitted() * max(0,n.dot(l)) + Ks * Li -> emitted() * max(0, n.dot(h))^p
 */
