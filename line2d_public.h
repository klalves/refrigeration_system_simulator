#include <stdio.h>
#include <stdlib.h>
#include "point2d_public.h"

#ifndef SUCCESS
#define SUCCESS 1
#endif

#ifndef FAIL
#define FAIL 0
#endif

typedef struct line2d_t *p_line2d_t, **pp_line2d_t;

// Creation operations
int line2d_create(pp_line2d_t pp, float a, float b);

// Destruction operations
int line2d_destroy(pp_line2d_t pp);

// Access operations
int line2d_ab_get(p_line2d_t p, float *a, float *b);

// Manipulation operations

/* Set configuration directly */
int line2d_ab_set(p_line2d_t p, float a, float b);
int line2d_a_set(p_line2d_t p, float a);
int line2d_b_set(p_line2d_t p, float b);
int line2d_ab_from_2_points_set(p_line2d_t p, point2d_t in1, point2d_t in2);
int line2d_rms_optimize(point2d_t * input_points, unsigned int length, float * rms);

/* 2D line extrapolation */
int line2d_y_get(line2d_t p, float x, float * y);
int line2d_x_get(line2d_t p, float y, float * y);

/* 2D line-line operations */
int line2d_line_intersection(line2d_t in1, line2d_t in2, p_point2d_t p_out);
int line2d_line_angle(line2d_t in1, line2d_t in2, float theta);

/* 2D point-line operations */
int line2d_point_distance(line2d_t line, point2d_t point, float * distance);

