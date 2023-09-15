#include<stdio.h>

int main() {
	int cel, fah, kel, opcao, t1;
	printf("Qual conversao vocec deseja fazer?\n digite o numero referente a opcao desejada:\n 1 - Celsius para Fahrenheit\n 2 - Fahrenheit para Celsius\n 3 - Celsius para kelvin \n 4 - Kelvin para Celsius \n 5 - Fahrenheit para Kelvin \n 6 - Kelvin para Fahrenheit\n");
	scanf("%d", &opcao);
	
	printf("Digite a temperatura:\n");
	scanf("%d", &t1);
	
	switch(opcao) {
		case 1:
			fah = t1 * 1.8 + 32;
			printf("%d em Celsius equivale a %d em Fahrenheit", t1, fah);
			break;
		case 2:
			cel = (t1 - 32) / 1.8; 
			printf("%d em Fahrenheit equivale a %d em Celsius", t1, cel);
			break;
		case 3:
			kel = t1 + 273;
			printf("%d em Celsius equivale a %d em Kelvin", t1, kel);
			break;
		case 4:
			kel = t1 - 273;
			printf("%d em Celsius equivale a %d em Kelvin", t1, kel);
			break;
		case 5:
			//transformando kelvin em celsius para depois converter para fahrenheit
			cel = (t1 - 32) / 1.8;
			kel = cel + 273;
			printf("%d em Fahrenheit equivale a %d em Celsius", t1, kel);
			break;
		case 6:
			//transformando kelvin em celsius para depois converter para Kelvin
			cel = t1 - 273;
			fah = cel * 1.8 + 32;
			printf("O %d em Kelvin equivale a %d em Fahrenheit", t1, fah);
			break;
		default:
			printf("opcao invalida");						
	}
	
	return 0;
}
