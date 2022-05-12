#pragma once
#include "Vector3D.h"
#include "Ray.h"
#include "AABoundingBox.h"

class AABoundingBox{
    public:
    bool neverSet;
    sivelab::Vector3D minPt, maxPt, centroid;

    AABoundingBox();

    void update(const sivelab::Vector3D &pt);
    void update(double x, double y, double z);
    void updateCentroid();
    void Union(const AABoundingBox &aabb);

    bool intersect(const Ray&r);
    // ray.origin.x + t*ray.direction.x = minX or maxX 
    // we know everything except t so we solve for t
    // 
};