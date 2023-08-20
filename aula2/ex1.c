#include<stdio.h>

int main(){
	float media, n1, n2;
	printf("\nDigite a primeira nota\n");
	scanf("%f", &n1);
	printf("\nDigite a segunda nota\n");
	scanf("%f", &n2);
	media = (n1 + n2) / 2;
	if(media >= 7){
		printf("\nParabens voce foi aprovado");
	} else {
		printf("\nVoce foi reprovado");
	}
	return 0;
}
