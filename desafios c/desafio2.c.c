#include <stdio.h>

int main() {
    int soma, sub, div, mult, operacao, n1, n2;
    
    printf("Qual operacao você deseja realizar?\nDigite o numero referente a opcao desejada:\n1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n");
    scanf("%d", &operacao);
    
    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);
    
    switch(operacao) {
		case 1:
			soma = n1 + n2;
			printf("O resultado da soma eh %d", soma);
		break;
		case 2:
			sub = n1 - n2;
			printf("O resultado da subtracao eh %d", sub);
		break;
		case 3:
			if(n2 != 0){
				div= n1/n2;
				printf("O resultado da divisao eh %d", div);
			} else {
				printf("Erro, Divisao por zero");
			}
		break;
		case 4:
			mult = n1 * n2;
			printf("O resultado da multiplicacao eh %d", mult);
		break;
		defaut:
			printf("opcao invalida");
	}
		return 0;
			
	}
	
	
	
   

