#pragma once

#include "AABoundingBox.h"
#include "Shape.h"
#include "Vector3D.h"
#include "Ray.h"
#include "HitStruct.h"

class BVHNode: public Shape{
    public:
    Shape * leftChild;
    Shape * rightChild;
    AABoundingBox aabbox;
    std::string name = "BVH";
    BVHNode(){};
    BVHNode(std::vector<Shape*> &shapeVec, int axis);
    bool closestHit(const Ray &r, const double tmin, double &tmax, HitStruct &h);
    bool closestHit(const Ray &r, const double tmin, double &tmax);
    void setName(const std::string &s){};
    void provideShader(Shader *s){};
};