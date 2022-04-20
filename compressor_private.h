#include "compressor_public.h"

typedef struct compressor_t{
    /* Compressor configuration */
    compressor_refrigerant_t refrigerant;
    unsigned int rated_frequency;
    unsigned int rated_power;
    unsigned int rated_voltage;
    efficiency_curve_t efficiency_curve;

    /* Dynamic variables */
    unsigned int speed;
    int pressure_in;
    int pressure_out;
}compressor_t;


