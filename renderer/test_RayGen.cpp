#include "Vector3D.cpp"
#include "FrameBuffer.h"
#include "Triangle.h"
#include "Camera.h"
#include "CoordSys.h"
#include "Ray.h"

#include <iostream>

using namespace std;
  
  int main(int argc, char *argv[]){

  int nx = 350, ny = 250;
  Framebuffer fb(nx, ny);
  fb.clear( Vector3D(0.0, 0.0, 0.0) );
  
Vector3D position(0,0,0), direction(0,0,1), up(0,1,0);
  CoordSys cs;
  if(direction.dot(up) == 1 || direction.dot(up) == -1)
      cs = CoordSys(direction, Vector3D(1,0,0));
  else
      cs = CoordSys(direction, up);
  
  double focalLength = 1.0;
  double imagePlaneW = 0.5;
  double imagePlaneH = 1/((nx/ny)/imagePlaneW);

  Camera *camPtr = new PerspectiveCamera(nx, ny, position, cs, imagePlaneW, imagePlaneH, focalLength);
  
  
  for (int j=0; j<fb.m_height; j++) {
      for (int i=0; i<fb.m_width; i++) {

        Ray r;
        cout << "______________________________________________________" << endl;
        camPtr->generateRay( i, j, r );
        cout << "r.dir[0]: " << r.dir[0] << " r.dir[1]: " << r.dir[1] << " r.dir[2]: " << r.dir[2] << endl;
        
        Vector3D rayDirColor = r.dir.normalize();
        rayDirColor = (rayDirColor + Vector3D(1,1,1))/2.0;
        fb.setPixelColor( i, j, rayDirColor );

        cout << "rayDirColor[0]: " << rayDirColor[0] << " rayDirColor[1]: " << rayDirColor[1] << " rayDirColor[2]: " << rayDirColor[2] << endl;
      }
  }
  fb.exportAsPNG("rayVisualization2.png");
  }