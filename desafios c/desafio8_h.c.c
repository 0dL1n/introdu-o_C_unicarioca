#include<stdio.h>
#include<math.h>

int main(){
	int base, exp;
	long long int result;
	
	printf("Calculadora de potencia\n Digite o numero base: ");
	scanf("%d", &base);
	
	printf("Digite o expoente: ");
	scanf("%d", &exp);
	
	result = pow(base,exp);
	
	printf(" o resultado de %d^%d eh %lld",base, exp, result);

	return 0;
}
