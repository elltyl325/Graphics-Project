#pragma once

#include <iostream>
#include "Shape.h"
#include "Vector3D.h"
#include "Ray.h"

using namespace std;

class Sphere: public Shape{
    public:

    sivelab::Vector3D pointOfIntersection; // =r.origin + (r.direction * t)
    sivelab::Vector3D center;
    double radius;
    std::string name = "Sphere";

    // Base class should have this
    // Shader *sPtr;
    
    // Base class has this so this hides it... do not need here since
    // in Shape
    // AABoundingBox aabbox;

    Sphere(){
        center = sivelab::Vector3D(0,0,0);
        radius = 1;
        sPtr = new Shader(sivelab::Vector3D(1,0,0));
        aabbox.update(center);
    }

    Sphere(sivelab::Vector3D cen, double rad){
        center = cen;
        aabbox.update(center);
        radius = rad;
        sPtr = new Shader(sivelab::Vector3D(1,0,0));
    }
    Sphere(sivelab::Vector3D cen, double rad, Shader *s){
        center = cen;
        aabbox.update(center);
        radius = rad;
        sPtr = s;
    }

    virtual ~Sphere(){}

    Sphere(double cen1, double cen2, double cen3, double rad){
        center = sivelab::Vector3D(cen1, cen2, cen3);
        aabbox.update(center);
        radius = rad;
    }
    void setName(const std::string &n){
        name = n;
    }

    void provideShader(Shader *s){
        sPtr = s;
    }

    sivelab::Vector3D calculateNormal(sivelab::Vector3D p){
        return (p - center) / radius;
    }

    bool closestHit(const Ray &r, const double tmin, double &tmax){
        bool newtmax = false;
        sivelab::Vector3D oc = r.origin - center;
        double a = r.dir.dot(r.dir);
        double b = 2.0 * oc.dot(r.dir);
        double c = oc.dot(oc) - radius * radius;
        double discriminant = b*b - 4*a*c;
        
        // If it doesn't intersect with surface of sphere
        if(discriminant < 0){
            return false;
        }
        // If tangent to sphere surface
        else if( discriminant <= 0.000001){
            double ttemp = (-b)/(2*a);
            if(ttemp >= tmin){
                return true;
            }
            return false;
        }
        double t1 = (-b + sqrt(discriminant)) / (2*a);
        double t2 = (-b - sqrt(discriminant)) / (2*a);

        if(t2 > tmin && t2 < tmax){
            newtmax = true;
        }
        if(t1 > tmin && t1 < tmax){
            newtmax = true;

        }
        return newtmax;
    }
    

    bool closestHit(const Ray &r, const double tmin, double &tmax, HitStruct &h){
        bool newtmax = false;
        sivelab::Vector3D oc = r.origin - center;
        double a = r.dir.dot(r.dir);
        double b = 2.0 * oc.dot(r.dir);
        double c = oc.dot(oc) - radius * radius;
        double discriminant = b*b - 4*a*c;
        
        if(discriminant < 0){
            return false;
        }
        else if( discriminant <= 0.000001){
            double ttemp = (-b)/(2*a);
            if(ttemp >= tmin){
                tmax = ttemp;
                h.t = ttemp;
                h.shader = sPtr;
                h.r.origin = r.origin;
                h.r.dir = r.dir;
                h.pt = r.origin + r.dir * h.t;
                h.normal = calculateNormal(h.pt);
                return true;
            }
            return false;
        }

        double t1 = (-b + sqrt(discriminant)) / (2*a);
        double t2 = (-b - sqrt(discriminant)) / (2*a);

        if(t2 > tmin && t2 < tmax){
            tmax = t2;
            h.t = t2;
            h.shader = sPtr;
            h.r.origin = r.origin;
            h.r.dir = r.dir;
            h.pt = r.origin + r.dir * h.t;
            h.normal = calculateNormal(h.pt);
            newtmax = true;
        }
        if(t1 > tmin && t1 < tmax){
            tmax = t1;
            h.t = t1;
            h.shader = sPtr;
            h.r.origin = r.origin;
            h.r.dir = r.dir;
            h.pt = r.origin + r.dir * h.t;
            h.normal = calculateNormal(h.pt);
            newtmax = true;

        }
        return newtmax;
    }
};
