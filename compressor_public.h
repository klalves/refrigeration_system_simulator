#include <stdio.h>
#include <stdlib.h>

#ifndef SUCCESS
#define SUCCESS 1
#endif

#ifndef FAIL
#define FAIL 0
#endif

typedef enum{
    COMPRESSOR_REFRIGERANT_R134a,
    COMPRESSOR_REFRIGERANT_R290,
    COMPRESSOR_REFRIGERANT_R404A,
    COMPRESSOR_REFRIGERANT_R449A,
    COMPRESSOR_REFRIGERANT_R452A,
    COMPRESSOR_REFRIGERANT_R513A,
    COMPRESSOR_REFRIGERANT_R600A
}compressor_refrigerant_t;

typedef struct compressor_t *p_compressor, **pp_compressor;

// Creation operations
int compressor_create(pp_compressor pp);

// Destruction operations
int compressor_destroy(pp_compressor pp);

// Access operations
int compressor_speed_get(p_compressor p, unsigned int * speed);
int compressor_power_get(p_compressor p, unsigned int * power);

// Manipulation operations
int compressor_speed_set(p_compressor p, unsigned int speed);