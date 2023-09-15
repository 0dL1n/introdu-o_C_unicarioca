#include<stdio.h>

int main (){
	int n, tab = 0, result;
	
	printf("Calculadora de tabuada\ndigite o numero: ");
	scanf("%d", &n);
	
	for(tab; tab < 11; tab++){
		result = n*tab;
		printf("%d x %d = %d\n", n, tab, result);
	}
	
	return 0;
}
