# radiance-webassembly
Trying to compile Radiance c code to WebAssembly


# Usage

```bash

cd src/common

// test creating testBSDF

cc -o testBSDF testBSDF.c bsdf*.c fvect.c ccolor.c ezxml.c hilbert.c disk2square.c words.c -lm
```

# Tools needed to compile
- cmake
- clang
- python 2.7
- emscripten (https://emscripten.org/docs/getting_started/downloads.html#platform-notes-installation-instructions-sdk)

# To compile, run the `build_javascript.py` script

# To test, run the `serve_javascript.py` script and load the test html file at
http://localhost:8080/test_radiance.html

This file contains a call to a function defined in the C source code. The next trick is to figure out what functions in radiance need to be called in order to make something useful