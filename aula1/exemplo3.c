#include<stdio.h>

int main(){
	char nome[50], sobrenome[50], curso[100];
	printf("Digite seu nome:\n");
	scanf("%s", &nome);
	printf("\nDigite seu sobrenome:\n");
	scanf("%s", &sobrenome);
	printf("qual o seu curso?\n");
	scanf("%s", &curso);
	
	printf("\nOs dados do usuario sao:");
	printf("\nNome:%s\nSobrenome:%s\nCurso:%s\n", nome,sobrenome,curso);
	printf("\n %s %s, Bem vindo ao curso de %s", nome, sobrenome, curso);
	return 0;
}
