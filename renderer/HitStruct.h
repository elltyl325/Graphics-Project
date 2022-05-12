#pragma once

#include "Vector3D.h"
#include "Ray.h"
//#include "Shader.h"

class Shader;
class Shape;
class HitStruct{
    public: 
        Shader *shader;
        Ray r;
        float t; // tmax
        Shape *sptr;
        sivelab::Vector3D normal;
        sivelab::Vector3D pt;
        HitStruct(){
            t = 1000000;
        };
        HitStruct(Ray ray, float tNum){
            r = ray;
            t = tNum;
        };

        // Vector3D normal(){
        //     if()
        // }
};
