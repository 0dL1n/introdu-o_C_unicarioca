#include <stdio.h>

int main() {
    int a1, r, n, a2, a3, a4, a5;
    printf("\nDigite o primeiro termo (a1): ");
    scanf("%i", &a1);
    printf("\nDigite a razao (r): ");
    scanf("%i", &r);
    printf("\nDigite o numero de termos (n): ");
    scanf("%i", &n);
    a2 = a1 + (n - 1) * r;
    a3 = a2 + (n - 1) * r;
    a4 = a3 + (n - 1) * r;
    a5 = a4 + (n - 1) * r;
    printf("os 5 primeiros termos sao respectivamente: %i %i %i %i %i", a1,a2, a3, a4, a5);
    return 0;
}
