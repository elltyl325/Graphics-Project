#pragma once

#include "Shader.h"
#include "HitStruct.h"
#include "Light.h"
#include "SceneContainer.h"
#include "Vector3D.h"

class Mirror: public Shader{
    public:

    Mirror(){};
    sivelab::Vector3D apply(SceneContainer* scene, HitStruct &h, int depth);
};