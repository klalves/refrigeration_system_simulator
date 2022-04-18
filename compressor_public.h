#include <stdio.h>
#include <stdlib.h>

#ifndef SUCESSO
#define SUCESSO 1
#endif

#ifndef FRACASSO
#define FRACASSO 0
#endif

typedef struct compressor_t *p_compressor, **pp_compressor;

// Creation operations
int compressor_create(pp_compressor pp);

// Destruction operations
int compressor_destroy(pp_compressor pp);

// Access operations


// Manipulation operations

