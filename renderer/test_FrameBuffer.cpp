#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>

#include <boost/progress.hpp>
#include <boost/date_time.hpp>

#include "png++/png.hpp"

#include "handleGraphicsArgs.h"
#include "FrameBuffer.h"

int main(int argc, char *argv[])
{
  sivelab::GraphicsArgs args;
  args.process(argc, argv);

  boost::progress_timer ptimer;
  int startTime = ptimer.elapsed();

  // Create a Framebuffer to hold the 2D data for our scene
  Framebuffer fb(args.width, args.height);

  //                                                                                               
  // "Render" the scene - normally you might call your different                                   
  // renderer class functions here, but we're going to do something                                
  // very simple to test the FB                                                                    
  //                                                                                               

  // e.g. set all the framebuffer pixels to red                                                    
  for (int i=0; i<fb.m_width; i++)
      for (int j=0; j<fb.m_height; j++) {
          fb.setPixelColor( i, j, 1, 0, 0 );
      }

  // When complete, output the file                                                                
  std::string oFilename;
  if (args.isSet("outputfile", oFilename)) {
      fb.exportAsPNG( oFilename );
  }

  int endTime = ptimer.elapsed();
  std::cout << "Rendering time: " << endTime - startTime << std::endl;
}