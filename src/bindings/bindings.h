#pragma once

// we don't need to export RH_C_FUNCTION in these libraries
#define RH_C_FUNCTION

#if defined(__EMSCRIPTEN__)
#define ON_WASM_COMPILE
#else
#define ON_PYTHON_COMPILE
#endif

#if defined(ON_PYTHON_COMPILE)
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#pragma comment(lib, "rpcrt4.lib")
#pragma comment(lib, "shlwapi.lib")
#endif

#include <stdio.h>
#include <stdlib.h>
#include "../common/bsdf.h"


#if defined(ON_WASM_COMPILE)
#include <emscripten/bind.h>
#endif

#if defined(ON_PYTHON_COMPILE)
typedef pybind11::dict BND_DICT;
typedef pybind11::tuple BND_Color;
typedef pybind11::tuple BND_TUPLE;
#endif
#if defined(ON_WASM_COMPILE)
typedef emscripten::val BND_DICT;
typedef emscripten::val BND_Color;
typedef emscripten::val BND_TUPLE;
#endif

