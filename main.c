#include <stdio.h>
#include "lista_dupla.h"

int main(){

	int i, quant,valor;
	
	dupla* L;
	dupla* Lbusca;
	
	L = lstCriaD();
	
	printf("Digite a quantidade de valores: ");
	scanf("%i", &quant);
	
	for(i = 0; i < quant; i++){
		printf("Digite um valor: ");
		scanf("%i", &valor);
		
		L = lstInsereD(L, valor);
	}
	
	lstImprimeD(L);
	
	valor = 0;
	
	printf("Digite um valor para buscar: ");
	scanf("%i", &valor);
	
	Lbusca = L;
	Lbusca = lstbuscaD(Lbusca, valor);
	
	if(Lbusca != NULL){
		printf("Valor encontrado : %d \n", Lbusca->info);
		
	}
	
	valor = 0;
	
	printf("Digite um valor para retirar: ");
	scanf("%i", &valor);
	
	L = lstretiraD(L, valor);
	
	if(L != NULL){
		lstImprimeD(L);
	}

	lstLiberaD(L);
	lstLiberaD(Lbusca);
	return 0;
}
