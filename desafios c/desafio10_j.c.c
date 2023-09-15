#include<stdio.h>

int main() {
	int n1, n2, n3, n4, maior;
	
	printf("Comparador de numeros:\n");
	
	printf("Digite o primieiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	printf("Digite o quarto numero: ");
	scanf("%d", &n4);
	
	
	//n1 incialmente eh o maior, apos comparar com o if com cada numero e caso o outro numero seja maior ira alterar a variavel maior e seguir com a comparacao 
	maior = n1;
	if( n2 > maior){
		maior = n2;
	}
	if (n3 > maior){
		maior = n3;
	}
	if (n4 > maior){
		maior = n4;
	}
	
	printf("O maior numero eh %d", maior);
	
	return 0;
}
