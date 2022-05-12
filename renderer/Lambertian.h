#pragma once

#include "Shader.h"
#include "HitStruct.h"
#include "Light.h"
#include "SceneContainer.h"
#include "Vector3D.h"


class Lambertian: public Shader{
    public:
    sivelab::Vector3D kd;

    Lambertian(){
        kd = sivelab::Vector3D(1,1,1);
    }
    Lambertian(sivelab::Vector3D diffuse){
        kd = diffuse;
    }

    sivelab::Vector3D apply(SceneContainer* scene, HitStruct &h, int depth);
};

