#include<stdio.h>

int main () {
	int n;
	unsigned long long int fat = 1; 
	
	
	printf("Deseja saber a fatorial de qual numero?\n Digite o numero:");
	scanf("%d", &n);
	
	if(n <= 0) {
		printf("digite um numero valido");
	} else{
		for(fat; n > 1; n--){
			fat *= n;
		}
	printf(" O fatorial eh %llu", fat);
	}
	
	return 0;
}
