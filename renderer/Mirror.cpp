#include "Mirror.h"

sivelab::Vector3D Mirror::apply(SceneContainer* scene, HitStruct &h, int depth){
    sivelab::Vector3D v = h.r.dir * -1.0;
    v.normalize();
    
    Ray refRay;
    refRay.origin = h.pt;
    refRay.dir = -1.0 * v + 2.0 * (v.dot(h.normal)) * h.normal;
    refRay.dir.normalize();

    sivelab::Vector3D c = scene->rayColor(refRay, h, scene, 0.0001, 1000000, depth-1);
    return c;
}
