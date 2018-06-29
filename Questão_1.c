//Giovani Lisboa e Hana Gabrielle
#include<stdio.h>
#include<stdlib.h>

typedef struct no {
   int	chave;
   int	conteudo;
   struct reg *esq, *dir; 
} no; //N�s para criar a �rvore de busca com chave; conte�do e ponteiros para os filhos direito e esquerdo

typedef struct no *arvore;

/*struct arvore * criaArvore () {
	return NULL;
}*/

void insere (arvore arvTemp, int chaveTemp) {    
	if (arvTemp == NULL) {
    arvTemp = malloc (sizeof (arvore));
    arvTemp->chave = chaveTemp;
    arvTemp->esq = arvTemp->dir = NULL;
    printf("%d\n", chaveTemp);
	}
    else if (arvTemp->chave > chaveTemp) 
    	insere (arvTemp->esq, chaveTemp);
    else if (arvTemp->chave < chaveTemp) 
		insere (arvTemp->dir, chaveTemp);
	else printf ("Elemento existente");
} //Fun��o para inserir um novo n� na �rvore e atribuir a chave do vetor

void localiza (arvore arvTemp, int busca) {
	if (arvTemp == NULL)
    	return NULL;
	if (arvTemp->chave == busca)
       return arvTemp;
    if (arvTemp->chave > busca)
		localiza (arvTemp->esq, busca);
    else
    	localiza (arvTemp->dir, busca);
} //Fun��o recursiva para testar as chaves de cada n�


void exibe (arvore arvTemp) {
	if (arvTemp != NULL) {
	printf("<");
  	printf("%d ", arvTemp->chave); // exibe a chave
	}
	if (arvTemp->esq != NULL)
		exibe(arvTemp->esq);
	if (arvTemp->dir != NULL)
    	exibe(arvTemp->dir);
  	printf(">");	
}

main() {
	int R[23] = {86, 11, 7, 35, 170, 2, 120, 21, 88, 152, 31, 12, 181, 28, 134, 70, 1, 85, 25, 77, 10, 128, 198};
	int i;
	
	arvore binaria = NULL;
		
	int raiz = 70; //m�dia � 69 e � o mais pr�ximo
	
	insere (binaria, raiz);
	
	for(i = 0; i <= 22; i++){
		if (R[i] != 70)
			insere (binaria, R[i]);
	}
	
	exibe (binaria);
}
