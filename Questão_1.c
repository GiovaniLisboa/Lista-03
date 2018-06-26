//Giovani Lisboa e Hana Gabrielle
#include<stdio.h>

typedef struct arvore {
   int	chave;
   int	conteudo;
   struct reg *esq, *dir; 
} no;

no * busca (no noTemp, int ) {
    if (noTemp == NULL || r->chave == busca)
       return noTemp;
    if (noTemp->chave > busca)
       return busca (noTemp->esq, busca);
    else
       return busca (noTemp->dir, busca);
}

arvore insere (arvore arvTemp, no *novo) {  
    if (arvTemp == NULL)
		return novo;
    if (arvTemp->chave > novo->chave) 
    	arvTemp->esq = insere (arvTemp->esq, novo);
    else 
		arvTemp->dir = insere (arvTemp->dir, novo);
    return arvTemp;
}

main(){
	int raiz;
	int R[23] = {86, 11, 7, 35, 170, 2, 120, 21, 88, 152, 31, 12, 181, 28, 134, 70, 1, 85, 25, 77, 10, 128, 198};
	
	raiz = R[0];
	for (int i=1; i <= 22; i++){
		if R[i]<raiz{
		raiz = R[i];
		}
	}
	
	for (int i=0; i <= 22; i++){
		
	}
}
