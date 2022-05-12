#pragma once

#include "Vector3D.h"

class Ray{
    public:
    sivelab::Vector3D origin, dir;
    
    Ray(){
        origin = sivelab::Vector3D(0,0,0);
        dir = sivelab::Vector3D(0,0,0);
    };

};
