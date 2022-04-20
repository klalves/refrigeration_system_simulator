#include <stdio.h>
#include <stdlib.h>

#ifndef SUCCESS
#define SUCCESS 1
#endif

#ifndef FAIL
#define FAIL 0
#endif

typedef struct point2d_t *p_point2d_t, **pp_point2d_t;

// Creation operations
int point2d_create(pp_point2d_t pp, float x, float y);

// Destruction operations
int point2d_destroy(pp_point2d_t pp);

// Access operations
int point2d_xy_get(p_point2d_t p, float *x, float *y);


// Manipulation operations

/* Set position directly */
int point2d_xy_set(p_point2d_t p, float x, float y);
int point2d_x_set(p_point2d_t p, float x);
int point2d_y_set(p_point2d_t p, float y);

/* 2-point operations */
int point2d_sum(point2d_t in1, point2d_t in2, p_point2d_t p_out);
int point2d_mult(point2d_t in1, point2d_t in2, p_point2d_t p_out);

/* Geometric transformations */
int point2d_translate(p_point2d_t p, float x, float y);
int point2d_rotate(p_point2d_t p, float theta);
int point2d_scale(p_point2d_t p, float scale);

/* 2-point metrics */
int point2d_distance(point2d_t in1, point2d_t in2, float * distance);
int point2d_dot_product(point2d_t in1, point2d_t in2, float * dot_product);

