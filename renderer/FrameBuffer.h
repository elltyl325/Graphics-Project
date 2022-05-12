#pragma once

#include <string>

#include <vector>
#include "Vector3D.h"

//using namespace sivelab;
class Vec3D
{
    public:
    float x, y, z;
};

class Framebuffer{
public:
    int m_width, m_height;
    Framebuffer();
    Framebuffer( int w, int h );

    void clear(sivelab::Vector3D v);
    void setPixelColor( int i, int j, float r, float g, float b);
    void setPixelColor( int i, int j, sivelab::Vector3D v);
    void getPixelColor( int i, int j, float &r, float &g, float &b);
    int getPixel( int i, int j);
    Framebuffer glow();
    void generateKernel(double kernel[][5]);
    void exportAsPNG( const std::string &filename);
    

    std::vector< Vec3D > m_pixelArray;
};
