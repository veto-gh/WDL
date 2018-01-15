#include "main.h"

int main(int argc, char* argv[]) {

  SWELLAppMain(SWELLAPP_LOADED,0,0);
  
  while (1) {
    void SWELL_RunMessageLoop();
    SWELL_RunMessageLoop();
    Sleep(10);
  }
  return 0;
};
