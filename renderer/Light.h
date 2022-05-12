#pragma once

#include "Vector3D.h"
#include "Ray.h"
#include "HitStruct.h"

class Light{

    public:
    sivelab::Vector3D m_position, intensity;

    Light();
    Light(sivelab::Vector3D pos, sivelab::Vector3D radEnergy){
        m_position = pos;
        intensity = radEnergy;
    }

    virtual ~Light(){};
};


class PointLight: public Light
{
    //sivelab::Vector3D intensity;

    PointLight(sivelab::Vector3D pos, sivelab::Vector3D I){
        m_position = pos;
        intensity = I;
    }

    // sivelab::Vector3D illuminate(Ray r, HitStruct h){
    //     sivelab::Vector3D x = h.r.origin + h.t * h.r.dir;
    //     sivelab::Vector3D temp = m_position - x;
    //     sivelab::Vector3D real = temp.normalize();
    //     sivelab::Vector3D l = (m_position - x)/real; 
    //     sivelab::Vector3D n =  l.normalize();
    //     sivelab::Vector3D E = max(0.0, n.dot(l));
    // }
};

