#include <stdlib.h>



typedef struct lista dupla;
typedef dupla* PListaDupla;


dupla* lstdupla_cria();



int lstdupla_vazia(dupla* L);


void lstdupla_imprime(dupla* L);


dupla* lstdupla_insere_ord(dupla* L, int valor);


dupla* lstdupla_busca(dupla* L, int valor);



dupla* lstdupla_retira(dupla* L, int valor);


void lstdupla_libera(dupla* L);

#ifndef lista_dupla_c
	#define lista_dupla_c
	#include "lista_dupla.c"
#endif


