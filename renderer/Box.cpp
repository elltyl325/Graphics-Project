#include "Box.h"

void Box::makeBox(){
        tarray[0] = new Triangle(sivelab::Vector3D(minVertex[0],minVertex[1],minVertex[2]),sivelab::Vector3D(maxVertex[0],minVertex[1],minVertex[2]),sivelab::Vector3D(maxVertex[0],maxVertex[1],minVertex[2])); // front face
        tarray[1] = new Triangle(sivelab::Vector3D(minVertex[0],minVertex[1],minVertex[2]),sivelab::Vector3D(maxVertex[0],maxVertex[1],minVertex[2]),sivelab::Vector3D(minVertex[0],maxVertex[1],minVertex[2]));
        tarray[2] = new Triangle(sivelab::Vector3D(minVertex[0],minVertex[1],minVertex[2]),sivelab::Vector3D(minVertex[0],minVertex[1],maxVertex[2]),sivelab::Vector3D(minVertex[0],maxVertex[1],maxVertex[2])); // left face
        tarray[3] = new Triangle(sivelab::Vector3D(minVertex[0],minVertex[1],minVertex[2]),sivelab::Vector3D(minVertex[0],maxVertex[1],minVertex[2]),sivelab::Vector3D(minVertex[0],maxVertex[1],maxVertex[2]));
        tarray[4] = new Triangle(sivelab::Vector3D(maxVertex[0],minVertex[1],minVertex[2]),sivelab::Vector3D(maxVertex[0],minVertex[1],maxVertex[2]),sivelab::Vector3D(maxVertex[0],maxVertex[1],maxVertex[2])); // right face
        tarray[5] = new Triangle(sivelab::Vector3D(maxVertex[0],minVertex[1],minVertex[2]),sivelab::Vector3D(maxVertex[0],maxVertex[1],minVertex[2]),sivelab::Vector3D(maxVertex[0],maxVertex[1],maxVertex[2]));
        tarray[6] = new Triangle(sivelab::Vector3D(minVertex[0],minVertex[1],maxVertex[2]),sivelab::Vector3D(maxVertex[0],minVertex[1],maxVertex[2]),sivelab::Vector3D(maxVertex[0],maxVertex[1],maxVertex[2])); // back face
        tarray[7] = new Triangle(sivelab::Vector3D(minVertex[0],minVertex[1],maxVertex[2]),sivelab::Vector3D(maxVertex[0],maxVertex[1],maxVertex[2]),sivelab::Vector3D(minVertex[0],maxVertex[1],maxVertex[2]));
        tarray[8] = new Triangle(sivelab::Vector3D(minVertex[0],minVertex[1],minVertex[2]),sivelab::Vector3D(maxVertex[0],minVertex[1],maxVertex[2]),sivelab::Vector3D(maxVertex[0],minVertex[1],minVertex[2])); // bottom face
        tarray[9] = new Triangle(sivelab::Vector3D(minVertex[0],minVertex[1],minVertex[2]),sivelab::Vector3D(minVertex[0],minVertex[1],maxVertex[2]),sivelab::Vector3D(maxVertex[0],minVertex[1],maxVertex[2]));
        tarray[10] = new Triangle(sivelab::Vector3D(minVertex[0],maxVertex[1],minVertex[2]),sivelab::Vector3D(maxVertex[0],maxVertex[1],maxVertex[2]),sivelab::Vector3D(maxVertex[0],maxVertex[1],minVertex[2])); // top face
        tarray[11] = new Triangle(sivelab::Vector3D(minVertex[0],maxVertex[1],minVertex[2]),sivelab::Vector3D(minVertex[0],maxVertex[1],maxVertex[2]),sivelab::Vector3D(maxVertex[0],maxVertex[1],maxVertex[2]));
    }

bool Box::closestHit(const Ray &r, const double tmin, double &tmax, HitStruct &hit){

        bool hitSomething = false;
        for(int i = 0; i < 12; i++){
            if(tarray[i]->closestHit(r, tmin, tmax, hit))
                hitSomething = true;
        }

        if(hitSomething){
            return true;
        }
        return false;
    }

bool Box::closestHit(const Ray &r, const double tmin, double &tmax){

        bool hitSomething = false;
        for(int i = 0; i < 12; i++){
            if(tarray[i]->closestHit(r, tmin, tmax))
                hitSomething = true;
        }

        if(hitSomething){
            return true;
        }
        return false;
    }
