#include<stdio.h>

int main (){
	int n1,n2, result;
	
	printf("Vamos identificar se os numeros são divisiveis! \nDigite o dividendo:\n");
	scanf("%d", &n1);
	
	printf("digite o divisor:\n");
	scanf("%d", &n2);
	
	result = n1 % n2;
	if(result == 0){
		printf("O numero %d eh divisivel por %d", n1, n2);
	}else{
		printf("O numero %d nao eh divisivel por %d", n1, n2);
	}
	
	return 0;
}
