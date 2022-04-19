#include "point2d_private.h"

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