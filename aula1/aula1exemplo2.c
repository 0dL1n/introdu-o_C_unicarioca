#include<stdio.h>

int main(){
	float x, y, funcao;
	printf("\nCalcular f(x) = 3x^2 + 5x + 30 ");
	printf("\ndigiter o valor de x \n");
	scanf("%f", &x);
 	funcao = 3*x*x + 5*x + 30;
	printf("\nf(%0.2f)=%0.2f\n", x,funcao);
	return 0;
}
