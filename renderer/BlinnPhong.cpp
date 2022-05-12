#include "BlinnPhong.h"

sivelab::Vector3D BlinnPhong::apply(SceneContainer* scene, HitStruct &h, int depth){
        sivelab::Vector3D color(0,0,0);
        for(int k = 0; k < scene->m_allLights.size(); k++){
            bool lightHit = false;
            Ray shadowRay;
            shadowRay.origin = h.pt;
            shadowRay.dir = scene->m_allLights[k]->m_position - shadowRay.origin;
            if(scene->anyHit(shadowRay, 0.0001, 1.0) == true){
                lightHit = true;
            }
            
            h.normal.normalize();

            if(!lightHit){
                sivelab::Vector3D l = scene->m_allLights[k]->m_position - h.pt / (scene->m_allLights[0]->m_position - h.pt).length();
                l.normalize();
                double nDotL = h.normal.dot(l);

                sivelab::Vector3D v = h.r.dir * -1.0;
                v.normalize();

                sivelab::Vector3D half = (v + l) / (v + l).length();
        
                color += (kd * scene->m_allLights[k]->intensity * max(0.0, nDotL)) 
                        + ks * scene->m_allLights[k]->intensity * pow(max(0.0, h.normal.dot(half)), phongExp); //pow(max(0.0, h.normal.dot(half))
            }
        }
        return color;
    }