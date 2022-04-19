#include "line2d_private.h"

/* Creation operations */
int line2d_create(pp_line2d_t pp, float a, float b){
	/* aloca descritor */
	(*pp) = (p_line2d_t)malloc(sizeof(line2d));
	if( (*pp) == NULL)
		return FAIL;
	/* inicializa as variaveis */
	(*pp)->a = a;
	(*pp)->b = b;
	return SUCCESS;
}

/* Destruction operations */
int line2d_destroy(pp_line2d_t pp){
	free(*pp);
	return SUCCESS;
}


/* Access operations */
int line2d_xy_get(p_line2d_t p, float *a, float *b){
	/*Check pointer content*/
	if(p==NULL){
		return FAIL;
	}
	
	/*Return requested value*/
	if(a!=NULL){
		*a = p->a;
	}

	if(b!=NULL){
		*b = p->b;
	}

	return SUCCESS;
}

/* Manipulation operations */
int line2d_ab_set(p_line2d_t p, float x, float y){
	/*Check pointer content*/
	if(p==NULL){
		return FAIL;
	}
	/*Set values*/
	p->a = a;
	p->b = b;

	return SUCCESS;
}

int line2d_a_set(p_line2d_t p, float a){
	/*Check pointer content*/
	if(p==NULL){
		return FAIL;
	}
	/*Set value*/
	p->a = a;

	return SUCCESS;
}

int line2d_b_set(p_line2d_t p, float b){
	/*Check pointer content*/
	if(p==NULL){
		return FAIL;
	}
	/*Set value*/
	p->b = b;

	return SUCCESS;
}