#pragma once

#include <iostream>
#include "FrameBuffer.h"
#include "Vector3D.h"
#include "CoordSys.h"
#include "Shape.h"
#include <string>
#include "Ray.h"
using namespace std;


class Camera
{
    public:

        virtual void generateRay(double i, double j, Ray &r ) = 0;
        virtual void updateImagePlane(int x, int y) = 0;
        Ray b;
        sivelab::Vector3D m_position;
        CoordSys m_coord;
        double ImagePlaneWidth;
        double ImagePlaneHeight;
        double m_focallength;
        int nx, ny;
        std::string name;

        Camera(){
            double ImagePlaneWidth = 0.5;
            double m_focallength = 1.0;
            int nx = 100, ny = 100;
        }

        Camera(int h, int w){
            ImagePlaneWidth=0.5;
            m_focallength = 1.0;
            nx = w; 
            ny = h;
        }
        virtual ~Camera(){}
        
};

class PerspectiveCamera : public Camera
{
    public:
    PerspectiveCamera() : Camera() {}

    PerspectiveCamera(int w, int h) : Camera() {
        ImagePlaneWidth = 0.5;
        ImagePlaneHeight = 1/((w/h)/ImagePlaneWidth);
        m_focallength = 1.0;
        nx = w;
        ny = h;
    }

    PerspectiveCamera(sivelab::Vector3D position, sivelab::Vector3D viewDir, double FL, double IPw) : Camera() {
        m_position = position;
        m_coord = CoordSys(viewDir, sivelab::Vector3D(0,1,0));
        ImagePlaneWidth = IPw;
        nx = 100;
        ny = 100;
        ImagePlaneHeight = 1/((nx/ny)/ImagePlaneWidth);
        m_focallength = FL;
    }

    PerspectiveCamera(int w, int h, sivelab::Vector3D pos, CoordSys cs, double IPw, double FL) : Camera() {
        nx = w;
        ny = h;
        m_position = pos;
        m_coord = cs;
        ImagePlaneWidth = IPw;
        ImagePlaneHeight = 1/((nx/ny)/ImagePlaneWidth);
        m_focallength = FL;
        
    }
    virtual ~PerspectiveCamera(){};

    void updateImagePlane(int x, int y){
        nx = x; 
        ny = y;
        ImagePlaneHeight = 1/((nx/ny)/ImagePlaneWidth);
    }

    void generateRay(double i, double j, Ray &ray){
        float u, v;
        l = -ImagePlaneWidth / 2.0, r = ImagePlaneWidth / 2.0;
        b = -ImagePlaneHeight/2.0, t = ImagePlaneHeight/2.0;
        u = l + (r-l) * i/nx;
        v = b + (t-b) * j/ny;
        
        ray.origin = m_position;
        ray.dir =  m_coord.m_W * -1.0 * m_focallength +  m_coord.m_U * u + m_coord.m_V * v;
        }

    // left right bottom top
    float l, r, b, t;
    //double m_focallength;
};

class OrthographicCamera : public Camera
{
    public:

    OrthographicCamera(){
            ImagePlaneWidth=0.5;
            m_focallength = 1.0;
            nx = 100; 
            ny = 100;
    }

    OrthographicCamera(sivelab::Vector3D position, sivelab::Vector3D viewDir, double FL, double IPw){
        m_position = position;
        m_coord = CoordSys(viewDir, sivelab::Vector3D(0,1,0));
        ImagePlaneWidth = IPw;
        ImagePlaneHeight = 1/((nx/ny)/ImagePlaneWidth);
        m_focallength = FL;
    }

    void updateImagePlane(int x, int y){
        nx = x; 
        ny = y;
        ImagePlaneHeight = 1/((nx/ny)/ImagePlaneWidth);
    }

    void generateRay(double i, double j, Ray &ray){
        float u, v;
        u = l + (r-l) * i/nx;
        v = l + (r-l) * j/ny;

        ray.origin = m_position + m_coord.m_U * u + m_coord.m_V * v; 
        ray.dir = m_coord.m_W * -1.0;
    }

    // left right bottom top
    float l, r, b, t;
};
