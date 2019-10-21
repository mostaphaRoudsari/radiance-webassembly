#pragma once

#include <stdio.h>
#include <stdlib.h>

#include <emscripten/bind.h>

// just include all of the radiance headers here so we can
// use them in the bindings.cpp source
#include "../common/bsdf.h"
#include "../common/bsdf_m.h"
#include "../common/bsdf_t.h"
#include "../common/ccolor.h"
#include "../common/ezxml.h"
#include "../common/fvect.h"
#include "../common/hilbert.h"
#include "../common/platform.h"
#include "../common/random.h"
#include "../common/rtio.h"
