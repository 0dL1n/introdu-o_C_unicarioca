/*Verificar se três números formam um triângulo e, se sim, identificar o tipo de triângulo */
#include <stdio.h>


int main() {
    int a, b, c, cond1, cond2, cond3;
    
    printf("Digite os três lados do triângulo (separados por espaços): ");
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
    	cond1 = a + b > c;
    	cond2 = a + c > b;
    	cond3 = b + c > a;
        if (cond1 && cond2 && cond3) {
            if (a == b && b == c) {
                printf(" Eh um Triangulo equilatero.\n");
            } else if (a == b || b == c || a == c) {
                printf("Eh Triangulo isosceles.\n");
            } else {
                printf("Eh Triangulo escaleno.\n");
            }
        } else {
            printf("Os lados nao formam um triangulo.\n");
        }
    } else {
        printf("Entrada invalida. Digite tres numeros inteiros separados por espaços.\n");
    }

    return 0;
}
