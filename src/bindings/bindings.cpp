#include "bindings.h"

using namespace emscripten;

// TODO: This is a function that can be called by javascript
// as it is exported at the bottom of this file. We need to
// figure out what radiance functionality should be placed
// inside of this function.
int bsdf(int a, int b)
{
  return a + b;
}



EMSCRIPTEN_BINDINGS(radiance)
{
  function("bsdf", &bsdf);
}

