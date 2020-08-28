#define DEBUG

#ifdef DEBUG
  
  #include "Core.h"

  int main(int argc, char** argv) {
    CJ::Core::init();

    CJ::Camera::Cam cam;
    cam.config.CamName = "Debug Cam";
    cam.config.Exposure = 50;

    CJ::Image image;
    image.name = "Debug Image";

    CJ::Core core;

    core.setupVision(&image, &cam);
    
    while (PROG::PROG_RUNNING()) {
      CJ::Output::Display(&image);
    }
    return 0;
  }

# else 

  int main(int argc, char** argv) {
    printf("Vision Program Starting")
  }
#endif