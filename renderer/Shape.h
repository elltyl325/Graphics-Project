#pragma once

#include "Vector3D.h"
#include <nlohmann/json.hpp>
#include "Shader.h"
#include "HitStruct.h"
#include "Ray.h"
#include "AABoundingBox.h"
using json = nlohmann::json;


class Shape{
    public:
    AABoundingBox aabbox;
    std::string name;

    Shader *sPtr;
    
    virtual bool closestHit(const Ray &r, const double tmin, double &tmax, HitStruct &h) = 0;
    virtual bool closestHit(const Ray &r, const double tmin, double &t) = 0;
    virtual void setName(const std::string &n) = 0;
    virtual void setColor(float c1, float c2, float c3){};
    virtual void provideShader(Shader *s) = 0;
    
    Shape(){};

    virtual ~Shape(){};
};

