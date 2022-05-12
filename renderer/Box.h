#pragma once

#include <iostream>
#include "Shape.h"
#include "Vector3D.h"
#include "Ray.h"
#include "Triangle.h"

using namespace std;

class Box: public Shape {
    public:
    sivelab::Vector3D minVertex, maxVertex;
    Shader *sPtr;
    std::string name = "Box";
    Triangle *tarray [12];
    AABoundingBox aabbox;

    Box(){
        minVertex = sivelab::Vector3D(0,0,0);
        maxVertex = sivelab::Vector3D(1,1,1);
        sPtr = new Shader(sivelab::Vector3D(1,0,0));
        aabbox.update(minVertex);
        aabbox.update(maxVertex);
        makeBox();
    }

    Box(sivelab::Vector3D minV, sivelab::Vector3D maxV){
        minVertex = minV;
        maxVertex = maxV;
        sPtr = new Shader(sivelab::Vector3D(1,0,0));
        aabbox.update(minVertex);
        aabbox.update(maxVertex);
        makeBox();
    }

    Box(sivelab::Vector3D minV, sivelab::Vector3D maxV, Shader *s){
        minVertex = minV;
        maxVertex = maxV;
        sPtr = s;
        aabbox.update(minVertex);
        aabbox.update(maxVertex);
        makeBox();
    }

    void makeBox();

    virtual ~Box(){}

    void setName(const std::string &n){
        name = n;
    }

    void provideShader(Shader *s){
        sPtr = s;
        for(int i = 0; i < 12; i++){
            tarray[i]->provideShader(sPtr);
        }
    }

    bool closestHit(const Ray &r, const double tmin, double &tmax, HitStruct &hit);

    bool closestHit(const Ray &r, const double tmin, double &tmax);
};
