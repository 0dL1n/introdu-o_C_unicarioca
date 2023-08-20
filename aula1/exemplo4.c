#include<stdio.h>
#include<math.h>

int main(){
	float a, x, b, c,delta;
	printf("Calculadora de funções do 2grau:\n Digite os itens da função conforme solicitado seguindo o modelo ax^2 + bx + c = 0:");
	printf("\ndigite o valor de a:");
	scanf("%f",&a);
	printf("\ndigite o valor de b:");
	scanf("%f",&b);
	printf("\ndigite o valor de c:");
	scanf("%f",&c);
	delta = pow(b,2)-4*a*c;
	
	if(delta > 0) {
		double x1,x2;
		x1 =  (-b + sqrt(delta))/(2*a);
		printf("\nO valor de x1 = %lf", x1);
		x2 =  (-b -sqrt(delta))/(2*a);
		printf("\nO valor de x2 = %lf", x2);
	} else if( delta == 0) {
		double x1;
		x1 = -b/(2*a);
		printf("\nO valor de x1 =  %lf", x1);
	} else {
		printf("\equacao não possui valor real");
	}
	return 0;
}
