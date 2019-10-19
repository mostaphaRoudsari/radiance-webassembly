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
- python 2.7
- emscripten (https://emscripten.org/docs/getting_started/downloads.html#platform-notes-installation-instructions-sdk)

# To compile, run the `build_javascript.py` script