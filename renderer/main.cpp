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
#include "jsonParser.cpp"
#include "AABoundingBox.h"
#include "BVHNode.h"


int main(int argc, char *argv[]){
    sivelab::GraphicsArgs args;
    args.process(argc, argv);
    bool usingBVH = false;
    int nx = args.width, ny = args.height;
    Framebuffer frameBuffer(nx, ny);
    frameBuffer.clear( sivelab::Vector3D(0.0, 0.0, 0.0) );

    SceneContainer scene;
    std::string filename = args.outputFileName;
    scene.parseJSONData(args.inputFileName);
    if(usingBVH) scene.initialize();
    
    HitStruct hs;
    int depth = args.recursionDepth;
    int rpp = args.rpp;

    for(int k = 0; k < scene.m_allCameras.size(); k++){
        scene.m_allCameras[k]->updateImagePlane(nx, ny);
    }
    
    for (int i=0; i<frameBuffer.m_width; i++){
        for (int j=0; j<frameBuffer.m_height; j++) {
            Vector3D c(0,0,0);
            for(int p = 0; p < rpp; p++){
                for(int q = 0; q < rpp; q++){
                    Ray r;
                    HitStruct h;
                    float tmin = 1.0;
                    double tmax = 100000;
                    if(rpp == 1)
                        scene.m_allCameras[0]->generateRay(i + 0.5, j + 0.5, r);
                    else
                        scene.m_allCameras[0]->generateRay(i + (p + drand48())/rpp, j + (p + drand48())/rpp, r);
                    c += scene.rayColor(r, h, &scene, tmin, tmax, depth);
                }
            }
            frameBuffer.setPixelColor(i, j, c/pow(rpp, 2));
        }
    }
    
    frameBuffer.exportAsPNG(filename);
}
