#include "Lambertian.h"

sivelab::Vector3D Lambertian::apply(SceneContainer* scene, HitStruct &h, int depth){
        sivelab::Vector3D color(0,0,0); 
        
        for(int i = 0; i < scene->m_allLights.size(); i++){
            bool lightHit = false;
            Ray shadowRay;
            shadowRay.origin = h.pt;
            shadowRay.dir = scene->m_allLights[i]->m_position - shadowRay.origin;
            if(scene->anyHit(shadowRay, 0.0001, 1.0) == true){
                lightHit = true;
            }

            h.normal.normalize();
            
            if(!lightHit){
                sivelab::Vector3D l = (scene->m_allLights[i]->m_position - h.pt) 
                               / (scene->m_allLights[i]->m_position - h.pt).length();

                double nDotL = h.normal.dot(l);
                color += kd * scene->m_allLights[i]->intensity * max(0.0, nDotL);
            }
        }
        
        return color;
    }