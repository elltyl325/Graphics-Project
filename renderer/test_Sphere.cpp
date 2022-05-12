#include "Vector3D.cpp"
#include "FrameBuffer.h"
#include "Triangle.h"
#include "Camera.h"
#include "CoordSys.h"
#include "Sphere.h"
#include "HitStruct.h"

int main(int argc, char *argv[]){

    Vector3D bgColor(0,0,0), sphereColor(0,0,1); // Colors
    int width = 200, height = 200;
    double radius = 1;
    Vector3D center(5,0,0);
    Framebuffer fb(width, height);
    fb.clear( Vector3D(0.0, 0.0, 0.0) );
    Vector3D position(0,0,0), direction(1,0,0), up(0,1,0);

    CoordSys cs;
    if(direction.dot(up) == 1 || direction.dot(up) == -1)
        cs = CoordSys(direction, Vector3D(1,0,0));
    else
        cs = CoordSys(direction, up);
  
    double focalLength = 1.0;
    double imagePlaneW = 0.5;
    double imagePlaneH = 1/((width/height)/imagePlaneW);
    double tmin = 1, tmax = 100000;

    Sphere *sphere = new Sphere(center, radius);

    Camera *camPtr = new PerspectiveCamera(height, width, position, cs, imagePlaneW, imagePlaneH, focalLength);

    for (int j=0; j<fb.m_height; j++) {
        for (int i=0; i<fb.m_width; i++) {
            bool hitSomething = false;
            Ray r;
            camPtr->generateRay( i, j, r );
            HitStruct h(sphereColor, r, tmin);
            if(sphere->closestHit(r, tmin, tmax, h)){
                    fb.setPixelColor( i, j, sphereColor);
            }
            else{
                fb.setPixelColor( i, j, bgColor);
            }
      }
    }

    fb.exportAsPNG("test.png");
}