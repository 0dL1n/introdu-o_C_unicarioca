#include<stdio.h>

int main (){
	float imc, peso, alt;
	
	printf("Calculadora de IMC\nDigite o seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite a sua altura(digite no formato 1.70): ");
	scanf("%f", &alt);
	
	imc = peso / (alt * alt);
	
	int magrezaIII = imc < 16;
	int magrezaII = imc >= 16 && imc <= 16.9;
	int magrezaI = imc >= 17 && imc <= 18.4;
	int adequado = imc >= 18.5 && imc <= 24.9;
	int preobeso = imc >= 25 && imc <= 29.9;
	int obesoI = imc >= 30 && imc <= 34.9;
	int obesoII = imc >= 35 && imc <= 39.9;
	
	
	if(magrezaIII){
		printf("O seu IMC eh %0.2f, esse IMC indica magreza grau III", imc);
	}else if(magrezaII){
		printf("O seu IMC eh %0.2f, esse IMC indica magreza grau II", imc);
	}else if(magrezaII){
		printf("O seu IMC eh %0.2f, esse IMC indica magreza grau II", imc);
	}else if(magrezaI){
		printf("O seu IMC eh %0.2f, esse IMC indica magreza grau I", imc);
	}else if(adequado){
		printf("O seu IMC eh %0.2f, esse IMC indica que esta no peso adequado", imc);
	}else if(obesoI){
		printf("O seu IMC eh %0.2f, esse IMC indica Obesidade grau I", imc);
	}else if(obesoII){
		printf("O seu IMC eh %0.2f, esse IMC indica Obesidade grau II", imc);
	}else{
		printf("O seu IMC eh %0.2f, esse IMC indica Obesidade grau III", imc);		
	}
	
	
	return 0;
}
