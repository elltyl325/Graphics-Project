#include "FrameBuffer.h"
#include "png++/png.hpp"
#include <iostream>

Framebuffer::Framebuffer()
    : m_width( 800 ), m_height( 800 ), m_pixelArray( m_width * m_height )
    {
    }

Framebuffer::Framebuffer(int w, int h)
    : m_width( w ), m_height( h ), m_pixelArray( m_width * m_height )
    {
    }

void Framebuffer::setPixelColor( int i, int j, float r, float g, float b){
    m_pixelArray[getPixel(i,j)].x = r;
    m_pixelArray[getPixel(i,j)].y = g;
    m_pixelArray[getPixel(i,j)].z = b;
}

void Framebuffer::setPixelColor( int i, int j, sivelab::Vector3D v){
    m_pixelArray[getPixel(i,j)].x = v[0];
    m_pixelArray[getPixel(i,j)].y = v[1];
    m_pixelArray[getPixel(i,j)].z = v[2];
}

void Framebuffer::getPixelColor( int i, int j, float &r, float &g, float &b){
    r = m_pixelArray[getPixel(i,j)].x;
    g = m_pixelArray[getPixel(i,j)].y;
    b = m_pixelArray[getPixel(i,j)].z;
}

int Framebuffer::getPixel(int i, int j){
    // no need to do the i-1 and j-1... you can check to see if things
    // are out of bounds though.  Remember, indices in C/C++ are in
    // [0, n-1] range so we assume i and j follow this.
    assert( i >=0  &&  i < m_width );
    assert( j >=0  &&  j < m_height );

    // correct
    return j * m_width + i;
}

void Framebuffer::clear(sivelab::Vector3D v){

    for(int i = 0; i < m_width; i++){
        for(int j = 0; j < m_height; j++){
            m_pixelArray[getPixel(i,j)].x = v[0];
            m_pixelArray[getPixel(i,j)].y = v[1];
            m_pixelArray[getPixel(i,j)].z = v[2];  
        }
    }

}

void Framebuffer::exportAsPNG( const std::string &filename){
    bool glowSet = false;

    int w = m_width, h = m_height, x, y, z;
    png::image< png::rgb_pixel > imData( w, h );
    Framebuffer fb2;
    if(glowSet)
        fb2 = glow();
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){

            if(glowSet){
                float r, g, b;
                r = m_pixelArray[getPixel(i,j)].x;
                g = m_pixelArray[getPixel(i,j)].y;
                b = m_pixelArray[getPixel(i,j)].z;
                sivelab::Vector3D temp1(r,g,b);
                fb2.getPixelColor(i, j, r, g, b);
                sivelab::Vector3D temp2(r,g,b);
                setPixelColor(i, j, temp1+temp2);
            }

            // Clamp if a value is above 1 or below 0
            if(m_pixelArray[getPixel(i,j)].x > 1) m_pixelArray[getPixel(i,j)].x = 1;
            if(m_pixelArray[getPixel(i,j)].x < 0) m_pixelArray[getPixel(i,j)].x = 0;
            if(m_pixelArray[getPixel(i,j)].y > 1) m_pixelArray[getPixel(i,j)].y = 1;
            if(m_pixelArray[getPixel(i,j)].y < 0) m_pixelArray[getPixel(i,j)].y = 0;
            if(m_pixelArray[getPixel(i,j)].z > 1) m_pixelArray[getPixel(i,j)].z = 1;
            if(m_pixelArray[getPixel(i,j)].z < 0) m_pixelArray[getPixel(i,j)].z = 0;

            // Convert from [0,1] to [0,255]
            m_pixelArray[getPixel(i,j)].x = m_pixelArray[getPixel(i,j)].x * 255;
            m_pixelArray[getPixel(i,j)].y = m_pixelArray[getPixel(i,j)].y * 255;
            m_pixelArray[getPixel(i,j)].z = m_pixelArray[getPixel(i,j)].z * 255;

            

            x = m_pixelArray[getPixel(i,j)].x;
            y = m_pixelArray[getPixel(i,j)].y;
            z = m_pixelArray[getPixel(i,j)].z;

            imData[(h-1)-j][i] = png::rgb_pixel(x, y, z);
        }
    }
    imData.write(filename);
}

Framebuffer Framebuffer::glow(){
    
    Framebuffer fb2(m_width, m_height);
    fb2.m_pixelArray = m_pixelArray;
    int w = m_width, h = m_height, stdDev = 7, x, y, z;
    png::image< png::rgb_pixel > imData( w, h );

    double kernel[5][5];
    constexpr double pi = 3.14159265358979323846, e = 2.71828182845904523536;
    double sigma = 5.0;
    double r, s = 2.0 * sigma * sigma;
    double sum = 0;
    
    // generate 5x5 kernel --------------------------------------------------------------
    int size = 5;
    int halfSize = (size - 1) / 2;
    for (int x = -halfSize; x <= halfSize; x++) {
        for (int y = -halfSize; y <= halfSize; y++) {
            r = x * x + y * y;
            kernel[x + halfSize][y + halfSize] = pow(e, (-r / s)) / (pi * s);
            sum += kernel[x + halfSize][y + halfSize];
        }
    }
    // normalize
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j)
            kernel[i][j] /= sum;
    }

    // Start going through pixels -------------------------------------------------------

    // Check to see which pixels are less than or equal to 1 so we can "get rid" of them
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            if(fb2.m_pixelArray[getPixel(i,j)].x <= 1) fb2.m_pixelArray[getPixel(i,j)].x = 0;
            else fb2.m_pixelArray[getPixel(i,j)].x = 1;
            if(fb2.m_pixelArray[getPixel(i,j)].y <= 1) fb2.m_pixelArray[getPixel(i,j)].y = 0;
            else fb2.m_pixelArray[getPixel(i,j)].y = 1;
            if(fb2.m_pixelArray[getPixel(i,j)].z <= 1) fb2.m_pixelArray[getPixel(i,j)].z = 0;
            else fb2.m_pixelArray[getPixel(i,j)].z = 1;
            
        }
    }
    // Walk the kernel through all of the pixels and set the color as we go
    for(int r = 0; r < 10; r++){
    sivelab::Vector3D c(0,0,0);
    double k = 0;
    for(int i = 0; i < w; i++){ // Main loop
        for(int j = 0; j < h; j++){
            for(int n = -2; n <= 2; n++){ // Kernel loop
                for(int m = -2; m <= 2; m++){
                    if((i+n >= 0 && i+n < w) && (j+m >= 0 && j+m < h)){ // Check if we are inside the bounds of the image
                        float val = kernel[n+2][m+2]; 
                        float r, g, b;
                        fb2.getPixelColor(i+n, j+m, r, g, b);
                        sivelab::Vector3D t1(r, g, b), t2(val, val, val);
                        k+= val;
                        c+= t1*t2;
                    } 
                }
            }
            fb2.setPixelColor(i,j,c/k);
            c = sivelab::Vector3D(0,0,0);
            k = 0;
        }
    }
    }
    Framebuffer fb3 = fb2;
    //Set range from [0,1] to [0,255], put data in out data array, then output. 
    // This part is only to have a picture that shows the glow that is being added.
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            fb2.m_pixelArray[getPixel(i,j)].x = fb2.m_pixelArray[getPixel(i,j)].x * 255;
            fb2.m_pixelArray[getPixel(i,j)].y = fb2.m_pixelArray[getPixel(i,j)].y * 255;
            fb2.m_pixelArray[getPixel(i,j)].z = fb2.m_pixelArray[getPixel(i,j)].z * 255;

            x = fb2.m_pixelArray[getPixel(i,j)].x;
            y = fb2.m_pixelArray[getPixel(i,j)].y;
            z = fb2.m_pixelArray[getPixel(i,j)].z;

            imData[(h-1)-j][i] = png::rgb_pixel(x, y, z);
        }
    }
    imData.write("glowtest.png");
    return fb3;
}

            