#include "compressor_private.h"


int compressor_create(pp_compressor pp){
	/* aloca descritor */
	(*pp) = (p_compressor)malloc(sizeof(compressor_t));
	if( (*pp) == NULL)
		return FRACASSO;
	/* inicializa as variaveis */
	return SUCESSO;
}

int compressor_destroy(pp_compressor pp){
	free(*pp);
	return SUCESSO;
}
