#include<stdio.h>

int checar (int *temp){
	int i;
	for (i = 0; i < 9; i++) {
		if (temp[i] > temp[i+1]){
			return 1;
			break;
		}
	}
	return 0;
}

void troca(int vetor[], int tamanho){
	int i, aux, cont;
	
	while (checar(vetor)){
		for (i = 0; i < (tamanho - 1); i++) {
			if (vetor[i] > vetor[i+1]){
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
				cont++;
			}
		}
	}

	printf("\nLista apos ordenacao por troca (Trocas: %d)\n", cont);
	for (i = 0; i <= 9; i++){
		printf("Lista[%d]: %d\n", i, vetor[i]);
	}
}

void radixsort(int vetor[], int tamanho) {
	int i;
	
	if (checar(vetor)) {
	    int *pont = (int *)calloc(tamanho, sizeof(int));
	    int base = 1;

		int maior = vetor[0];
    	for (i = 0; i < tamanho; i++) {
        	if (vetor[i] > maior)
    	   		maior = vetor[i];
    	}

    	while (maior/base > 0) {
        	int bucket[10] = { 0 };
    		for (i = 0; i < tamanho; i++)
    	    	bucket[(vetor[i] / base) % 10]++;
    		for (i = 1; i < 10; i++)
    	    	bucket[i] += bucket[i - 1];
	    	for (i = tamanho - 1; i >= 0; i--)
	    	    pont[--bucket[(vetor[i] / base) % 10]] = vetor[i];
	    	for (i = 0; i < tamanho; i++)
	    	    vetor[i] = pont[i];
	    	base *= 10;
	    }

    	free(pont);
	}
	
	printf("\nLista apos ordenacao por radixsort\n");
	for (i = 0; i <= 9; i++){
		printf("Lista[%d]: %d\n", i, vetor[i]);
	}
}

main (){
	int i, trocas = 0;
	int TAMANHO = 10;
	
	int lista[10] = {4, 8, 2, 15, 24, 1, 3, 12, 28, 10};
	
	/*for (i = 0; i <= 9; i++){
		printf("Insira um valor: ");
		scanf(lista[i]);
		printf("\n");
	}*/
	
	printf("Lista original\n");
	for (i = 0; i <= 9; i++){
		printf("Lista[%d]: %d\n", i, lista[i]);
	}
	
	troca(lista, TAMANHO);
	
	radixsort(lista, TAMANHO);
		
}
