#pragma once

#include <iostream>
#include "Shape.h"
#include "Vector3D.h"
#include "Ray.h"

using namespace std;

class Triangle: public Shape {
    public:
    sivelab::Vector3D m_a;
    sivelab::Vector3D m_b;
    sivelab::Vector3D m_c;
    sivelab::Vector3D normal;
    
    // Base class should have this
    // Shader *sPtr;
    
    // Base class has this so this hides it... do not need here since
    // in Shape
    // AABoundingBox aabbox;
    std::string name = "Triangle";
    
    Triangle(){
        m_a = sivelab::Vector3D (1,0,0);
        m_b = sivelab::Vector3D (0,1,0);
        m_c = sivelab::Vector3D (0,0,1);
        normal = calculateNormal();
        setBounds();
        sPtr = new Shader(sivelab::Vector3D(1,0,0));
    }

    Triangle(sivelab::Vector3D v1, sivelab::Vector3D v2, sivelab::Vector3D v3){
        m_a = v1;
        m_b = v2;
        m_c = v3;
        normal = calculateNormal();
        setBounds();
        sPtr = new Shader(sivelab::Vector3D(1,0,0));
    }

    Triangle(sivelab::Vector3D v1, sivelab::Vector3D v2, sivelab::Vector3D v3, Shader* s){
        m_a = v1;
        m_b = v2;
        m_c = v3;
        normal = calculateNormal();
        setBounds();
        sPtr = s;
    }

    virtual ~Triangle(){}

    void setName(const std::string &n){
        name = n;
    }

    void provideShader(Shader *s){
        sPtr = s;
    }

    void setBounds(){
        aabbox.update(m_a);
        aabbox.update(m_b);
        aabbox.update(m_c);
    }

    sivelab::Vector3D calculateNormal(){
        sivelab::Vector3D u = m_b - m_a;
        sivelab::Vector3D v = m_c - m_a;
        sivelab::Vector3D norm = sivelab::Vector3D(u[1]*v[2] - u[2]*v[1], u[2]*v[0]-u[0]*v[2], u[0]*v[1] - u[1]*v[0]);
        return norm;
    }

    bool closestHit(const Ray &r, const double tmin, double &tmax, HitStruct &hit){
        double a = m_a[0] - m_b[0];
        double b = m_a[1] - m_b[1];
        double c = m_a[2] - m_b[2];

        double d = m_a[0] - m_c[0];
        double e = m_a[1] - m_c[1];
        double f = m_a[2] - m_c[2];

        double g = r.dir[0];
        double h = r.dir[1];
        double i = r.dir[2];

        double j = m_a[0] - r.origin[0];
        double k = m_a[1] - r.origin[1];
        double l = m_a[2] - r.origin[2];

        double ei_minus_hf = e*i - h*f;
        double gf_minus_di = g*f - d*i;
        double dh_minus_eg = d*h - e*g;

        double M = a * ei_minus_hf + b * gf_minus_di + c * dh_minus_eg;

        double ak_minus_jb = a*k - j*b;
        double jc_minus_al = j*c - a*l;
        double bl_minus_kc = b*l - k*c;

        double t = -1.0, gamma = -1.0, beta = -1.0;
    
        t = -1.0 * (f* ak_minus_jb + e * jc_minus_al + d * bl_minus_kc) / M;

        gamma = (i*ak_minus_jb + h*jc_minus_al + g*bl_minus_kc) / M;
        beta = (j*ei_minus_hf + k*gf_minus_di + l*dh_minus_eg) / M;

        if((t<tmin) || (t > tmax)){
            return false;
        }
        
        if((gamma < 0) || gamma > 1){
            return false;
        }

        if((beta < 0) || beta > 1-gamma){
            return false;
        }

        
        tmax = t;
        hit.shader = sPtr;
        hit.t = t;
        hit.r.origin = r.origin;
        hit.r.dir = r.dir;
        hit.pt = r.origin + r.dir * hit.t;
        hit.normal = normal;
        return true;
    }
    
    bool closestHit(const Ray &r, const double tmin, double &tmax){
        double a = m_a[0] - m_b[0];
        double b = m_a[1] - m_b[1];
        double c = m_a[2] - m_b[2];

        double d = m_a[0] - m_c[0];
        double e = m_a[1] - m_c[1];
        double f = m_a[2] - m_c[2];

        double g = r.dir[0];
        double h = r.dir[1];
        double i = r.dir[2];

        double j = m_a[0] - r.origin[0];
        double k = m_a[1] - r.origin[1];
        double l = m_a[2] - r.origin[2];

        double ei_minus_hf = e*i - h*f;
        double gf_minus_di = g*f - d*i;
        double dh_minus_eg = d*h - e*g;

        double M = a * ei_minus_hf + b * gf_minus_di + c * dh_minus_eg;

        double ak_minus_jb = a*k - j*b;
        double jc_minus_al = j*c - a*l;
        double bl_minus_kc = b*l - k*c;

        double t = -1.0, gamma = -1.0, beta = -1.0;
    
        t = -1.0 * (f* ak_minus_jb + e * jc_minus_al + d * bl_minus_kc) / M;

        gamma = (i*ak_minus_jb + h*jc_minus_al + g*bl_minus_kc) / M;
        beta = (j*ei_minus_hf + k*gf_minus_di + l*dh_minus_eg) / M;

        if((t<tmin) || (t > tmax)){
            return false;
        }
        
        if((gamma < 0) || gamma > 1){
            return false;
        }

        if((beta < 0) || beta > 1-gamma){
            return false;
        }
        tmax = t;
        return true;
    }
};

