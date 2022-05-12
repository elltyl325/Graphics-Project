#include "Vector3D.h"
#include "FrameBuffer.h"
#include "Triangle.h"
#include "Camera.h"
#include "CoordSys.h"
#include <iostream>
#include "jsonSceneParser.cpp"
#include "SceneContainer.h"
#include "Renderer.h"
#include "HitStruct.h"
#include "Ray.h"
#include "Sphere.h"
#include "handleGraphicsArgs.h"

using namespace std;
  
int main(int argc, char *argv[]){

    sivelab::GraphicsArgs args;
    args.process(argc, argv);

    int nx = args.width, ny = args.height;

    Framebuffer fb(nx, ny);
    fb.clear( Vector3D(0.0, 0.0, 0.0) );

    SceneContainer scene;
    std::string filename = args.outputFileName;
    //std::string filename = "test.png";
    // if(args.isSet("outputfile")){
    //     std::string filename = args.outputFileName;
    // }
    //scene.parseJSONData(args.inputFileName);
    HitStruct hs;

    double focalLength = 1.0;
    double imagePlaneW = 0.5;
    double imagePlaneH = 1/((nx/ny)/imagePlaneW);

    Vector3D position(0,0,0);
    //CoordSys cs;
    CoordSys cs(Vector3D(0, 0, -1), Vector3D(0,1,0));
    Camera *camPtr = new PerspectiveCamera(nx, ny, position, cs, imagePlaneW, imagePlaneH, focalLength);
    scene.addCamera(camPtr);
    
    //render(fb, hs, scene.m_allShapes, camPtr);

    Shader *sPtr1 = new Shader(Vector3D(1,0,0));
    Shader *sPtr2 = new Shader(Vector3D(0,1,0));
    Shader *sPtr3 = new Shader(Vector3D(0,0,1));
    // Shape *trianglePtr = new Triangle(
    //         Vector3D(-1.2, -0.2, -7), 
    //         Vector3D(0.8, -0.5, -5), 
    //         Vector3D(0.9, 0, -5), 
    //         sPtr1);
    // scene.addShape(trianglePtr);

    // Shape *trianglePtr2 = new Triangle(
    //         Vector3D(0.773205, -0.93923, -7), 
    //         Vector3D(0.0330127, 0.94282, -5), 
    //         Vector3D(-0.45, 0.779423, -5), 
    //         sPtr2);
    // scene.addShape(trianglePtr2);

    // Shape *trianglePtr3 = new Triangle(
    //         Vector3D(0.426795, 1.13923, -7), 
    //         Vector3D(-0.833013, -0.44282, -5), 
    //         Vector3D(-0.45, -0.779423, -5), 
    //         sPtr3);
    // scene.addShape(trianglePtr3);
        
    Shape *spherePtr = new Sphere(
            Vector3D(0,0,-4.9),
            .3,
            sPtr1);
    scene.addShape(spherePtr);

    //Renderer *renderer = new WhittedRayTracer(fb, hs, scene.m_allShapes, camPtr);

    for(int i = 0; i < fb.m_width; i++){
        for(int j = 0; j < fb.m_height; j++){
            bool hitSomething = false;
            HitStruct h;
            float tmin = 1.0;
            float tmax = 100000;
            Ray r;
            camPtr->generateRay(i, j, r);

            for(int k = 0; k < scene.m_allShapes.size(); k++){
                if(scene.m_allShapes[k]->closestHit(r, tmin, tmax, h))
                    hitSomething = true;
            }
            if(hitSomething)
                fb.setPixelColor(i, j, h.shader->apply(h));
            else
                fb.setPixelColor(i, j, Vector3D(0.0, 0.0, 0.0));
            }
        }
    fb.exportAsPNG(filename);
    
}