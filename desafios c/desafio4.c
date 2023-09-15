#include<stdio.h>

int main() {
	int numNotas, soma = 0, i = 1;
	float nota, media;
	
	printf("Quantas nota deseja informar?\n");
	scanf("%d", &numNotas);
	
	if(numNotas <= 0) {
		printf("Por favor, digite um numero valido de notas");
		return 1; //retorno com erro
	}
	
	for(i; i <= numNotas; i++) {
		printf("Digite a nota %d: \n", i);
		scanf("%f", &nota);
	
		if(nota < 0.0 || nota > 10.0) {
			printf("Digite uma nota válida:\n");
			return 1;
		}
		
		soma += nota;
	}

	media = soma/numNotas;
	printf("A media eh %0.2f", media);
	
	return 0;
}
