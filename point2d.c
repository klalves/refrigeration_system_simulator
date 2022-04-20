#include "point2d_private.h"
#include <cmath.h>

/* Creation operations */
int point2d_create(pp_point2d_t pp, float x, float y){
	/* aloca descritor */
	(*pp) = (p_point2d_t)malloc(sizeof(point2d));
	if( (*pp) == NULL)
		return FAIL;
	/* inicializa as variaveis */
	(*pp)->x = x;
	(*pp)->y = y;
	return SUCCESS;
}

/* Destruction operations */
int point2d_destroy(pp_point2d_t pp){
	free(*pp);
	return SUCCESS;
}


/* Access operations */
int point2d_xy_get(p_point2d_t p, float *x, float *y){
	/*Check pointer content*/
	if(p==NULL){
		return FAIL;
	}
	
	/*Return requested value*/
	if(x!=NULL){
		x = p->x;
	}

	if(y!=NULL){
		y = p->y;
	}

	return SUCCESS;
}

/* Manipulation operations */

int point2d_xy_set(p_point2d_t p, float x, float y){
	/*Check pointer content*/
	if(p==NULL){
		return FAIL;
	}
	/*Set values*/
	p->x = x;
	p->y = y;

	return SUCCESS;
}

int point2d_x_set(p_point2d_t p, float x){
	/*Check pointer content*/
	if(p==NULL){
		return FAIL;
	}
	/*Set value*/
	p->x = x;

	return SUCCESS;
}

int point2d_y_set(p_point2d_t p, float y){
	/*Check pointer content*/
	if(p==NULL){
		return FAIL;
	}
	/*Set value*/
	p->y = y;

	return SUCCESS;
}


int point2d_sum(point2d_t in1, point2d_t in2, p_point2d_t p_out)
{
	if(p_out==NULL){
		return FAIL;
	}

	*p_out.x = in1.x + in2.x;
	*p_out.y = in1.y + in2.y;

	return SUCCESS;
}

int point2d_mult(point2d_t in1, point2d_t in2, p_point2d_t p_out)
{
	if(p_out==NULL){
		return FAIL;
	}

	*p_out.x = in1.x * in2.x;
	*p_out.y = in1.y * in2.y;

	return SUCCESS;
}


int point2d_translate(p_point2d_t p, float x, float y)
{
	if(p == NULL){
		return FAIL;
	}

	*p.x += x;
	*p.y += y;

	return SUCCESS;
}

int point2d_rotate(p_point2d_t p, float theta)
{
	float temp_x, temp_y;

	if(p == NULL){
		return FAIL;
	}

	temp_x = *p.x*cos(theta) - *p.y*sin(theta);
	temp_y = *p.x*sin(theta) + *p.y*cos(theta);

	*p.x = temp_x;
	*p.y = temp_y;

	return SUCCESS;
}

int point2d_scale(p_point2d_t p, float scale)
{
	if(p == NULL){
		return FAIL;
	}

	*p.x *= scale;
	*p.y *= scale;

	return SUCCESS;
}


int point2d_distance(point2d_t in1, point2d_t in2, float * distance)
{
	if(distance == NULL){
		return FAIL;
	}

	*distance = sqrt(pow(in1.x-in2.x,2) + pow(in1.y-in2.y,2));

	return SUCCESS;
}

int point2d_dot_product(point2d_t in1, point2d_t in2, float * dot_product)
{
	point2d_t temp_point;

	if(dot_product == NULL){
		return FAIL;
	}

	if(point2d_mult(in1, in2, &temp_point) == NULL){
		return FAIL;
	}

	*dot_product = temp_point.x + temp_point.y;

	return SUCCESS;
}