# radiance-webassembly
Trying to compile Radiance c code to WebAssembly


# Usage

```bash

cd src/common

// test creating testBSDF

cc -o testBSDF testBSDF.c bsdf*.c fvect.c ccolor.c ezxml.c hilbert.c disk2square.c words.c -lm
```
