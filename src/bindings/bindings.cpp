#include "bindings.h"

#if defined(ON_WASM_COMPILE)
using namespace emscripten;

void bsdf()
{
  //double ds[2];
  //ds[0] = 0.0;
  //ds[1] = 1.0;
  //SDsquare2disk(ds, 9, 5);
}


void initRadianceBindings(void*)
{
  function("bsdf", &bsdf);
}

#endif


#if defined(ON_PYTHON_COMPILE)
namespace py = pybind11;
PYBIND11_MODULE(_rhino3dm, m){
  m.doc() = "rhino3dm python package. OpenNURBS wrappers with a RhinoCommon style";
#endif

#if defined(ON_WASM_COMPILE)
using namespace emscripten;
EMSCRIPTEN_BINDINGS(radiance) {
  void* m = nullptr;
#endif

  initRadianceBindings(m);
}

