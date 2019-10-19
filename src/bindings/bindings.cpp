#include "bindings.h"

using namespace emscripten;

int bsdf(int a, int b)
{
  return a + b;
}


void initRadianceBindings()
{
  function("bsdf", &bsdf);
}


EMSCRIPTEN_BINDINGS(radiance)
{
  initRadianceBindings();
}

