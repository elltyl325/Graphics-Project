#include "Vector3D.cpp"
#include "FrameBuffer.h"
#include "Triangle.h"
#include "Sphere.h"
#include "Camera.h"
#include "CoordSys.h"
#include "HitStruct.h"
#include "Ray.h"
#include "SceneContainer.h"
#include "handleGraphicsArgs.h"


int main(int argc, char *argv[]){
    //GraphicsArgs ga;

    // sivelab::Vector3D U(1,0,0), V(0,1,0), W(0, 0, 1); // Coords
    // int width = 400, height = 400;
    // Framebuffer frameBuffer(width, height);

    // SceneContainer scene;
    // //std::string filename = argv[1];
    // //scene.parseJSONData(argv[1]);
    
    sivelab::Vector3D a(1, .5, .3);
    sivelab::Vector3D b(.9, .3, 1);
    sivelab::Vector3D c = a - b;
    

    // Shader *sPtr1 = new Shader(sivelab::Vector3D(1,0,0));
    // Shader *sPtr2 = new Shader(sivelab::Vector3D(0,1,0));
    // Shader *sPtr3 = new Shader(sivelab::Vector3D(0,0,1));
    // // Shape *trianglePtr = new Triangle(
    // //         sivelab::Vector3D(-1.2, -0.2, -7), 
    // //         sivelab::Vector3D(0.8, -0.5, -5), 
    // //         sivelab::Vector3D(0.9, 0, -5), 
    // //         sPtr1);
    // // scene.addShape(trianglePtr);

    // // Shape *trianglePtr2 = new Triangle(
    // //         sivelab::Vector3D(0.773205, -0.93923, -7), 
    // //         sivelab::Vector3D(0.0330127, 0.94282, -5), 
    // //         sivelab::Vector3D(-0.45, 0.779423, -5), 
    // //         sPtr2);
    // // scene.addShape(trianglePtr2);

    // // Shape *trianglePtr3 = new Triangle(
    // //         sivelab::Vector3D(0.426795, 1.13923, -7), 
    // //         sivelab::Vector3D(-0.833013, -0.44282, -5), 
    // //         sivelab::Vector3D(-0.45, -0.779423, -5), 
    // //         sPtr3);
    // // scene.addShape(trianglePtr3);

    // Shape *spherePtr = new Sphere(
    //         sivelab::Vector3D(0,0,-4.9),
    //         1,
    //         sPtr1);
    // scene.addShape(spherePtr);
    // Shape *spherePtr2 = new Sphere(
    //         sivelab::Vector3D(.3,0,-4.7),
    //         .7,
    //         sPtr2);
    // scene.addShape(spherePtr2);

    // double focalLength = 1.0;   
    // float imagePlaneWidth = 0.5;
    // float tmin = 1;  
    // sivelab::Vector3D position(0,0,0);
    // CoordSys cs(sivelab::Vector3D(0,0,-1), sivelab::Vector3D(0,1,0));
    // Camera *camPtr = new PerspectiveCamera(width, height, position, cs, imagePlaneWidth, focalLength);

    // int count = 0;
    // for (int i=0; i<frameBuffer.m_width; i++){
    //     for (int j=0; j<frameBuffer.m_height; j++) {
    //         bool hitSomething = false;
    //         double tmax = 20000;
    //         Ray r;
    //         HitStruct h;
    //         camPtr->generateRay(i, j, r);

    //         for(int k = 0; k < scene.m_allShapes.size(); k++){
    //             if(scene.m_allShapes[k]->closestHit(r, tmin, tmax, h))
    //                 hitSomething = true;
    //         }
    //         if(hitSomething)
    //             frameBuffer.setPixelColor(i, j, h.shader->apply(h));
    //         else
    //             frameBuffer.setPixelColor(i, j, sivelab::Vector3D(0,0,0));
    //     }
    // }
    // //frameBuffer.exportAsPNG(filename);
    // frameBuffer.exportAsPNG("test.png");
}