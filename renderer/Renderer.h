#pragma once

#include "HitStruct.h"
#include "FrameBuffer.h"
#include "Vector3D.h"
#include "Shape.h"
#include "Ray.h"
#include "Camera.h"
#include "Shader.h"

class Renderer{
    public:

    virtual void render(Framebuffer fb, HitStruct h, std::vector <Shape*> shapes, Camera* c)=0;
};

class WhittedRayTracer : public Renderer{
    public:
    
    void render(Framebuffer fb, HitStruct h, std::vector <Shape*> shapes, Camera* c){ //, Shader &s
        for(int i = 0; i < fb.m_width; i++){
            for(int j = 0; i < fb.m_height; i++){
                bool hitSomething = false;
                HitStruct h;
                float tmin = 1.0;
                float tmax = 100000;
                Ray r;
                c->generateRay(i, j, r);
                for(int k = 0; k < shapes.size(); k++){
                    if(shapes[k]->closestHit(r, tmin, tmax, h))
                        hitSomething = true;
                }
                if(hitSomething)
                    fb.setPixelColor(i, j, h.shader->apply(h));
                else
                    fb.setPixelColor(i, j, Vector3D(0.0, 0.0, 0.0));
            }
        }
    };

};