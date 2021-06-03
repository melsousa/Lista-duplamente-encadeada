struct lista{
	int info;
	struct lista *prox;
	struct lista *ant;
};


dupla* lstCriaD(){
	return NULL;
}


int lstVaziaD(dupla* L){
	return L == NULL;
}


void lstImprimeD(dupla* L){
	dupla* head = L;
	
	if(head)
		do{
			
			printf("%d\n", head->info);
			head = head->prox;
		}while(head != L);
		
	
}


dupla* lstInsereD(dupla* L, int valor){
	dupla* novo = (dupla*)malloc(sizeof(dupla));
	novo->info = valor;
	
	if(!lstVaziaD(L)){
		novo->ant = L->ant;
		novo->prox = L;
		L->ant = novo;
		novo->ant->prox = novo;
		
	}else{
		novo->ant = novo;
		novo->prox = novo;
	}
	return novo;
}



dupla* lstbuscaD(dupla* L, int valor){
	dupla* head;
	
	for(head = L; head != NULL; head = head->prox){
		if(head->info == valor){
			
			return head;
			
		}		
	}
	return NULL;
	
	
}



dupla* lstretiraD(dupla* L, int valor){
	dupla* head = L;
	int aux = 0;
	if(!lstVaziaD(L))
		do{
			if(head->info == valor){
				
				head->prox->ant = head->ant;
				head->ant->prox = head->prox;
				aux++;
				if(head==L){
					L = head->prox;	
				}
				
				free(head);
				break;
				
			}else{
				head = head->prox;		
			}
		}while(head != L);
	
	if(aux == 0){
		printf("Valor não encontrado! ");
	}else{
		return L;	
	}
		
	
	
}


void lstLiberaD(dupla* L){
	dupla* head = L;
	while(head != NULL){
		dupla* t = head->prox;
		free(head);
		head = t;
	}
}


