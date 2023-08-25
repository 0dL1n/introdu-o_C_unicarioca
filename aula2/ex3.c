#include <stdio.h>
#include <math.h>

int main() {
    double a1, r, n, soma, an,nt;
    printf("\nDigite o primeiro termo (a): ");
    scanf("%lf", &a1);
    printf("\nDigite a razao (r): ");
    printf("\n***Observacao: a razao deve ser maior que 0.***\n");
    scanf("%lf", &r);
    printf("\nDigite o numero de termos (n): ");
    scanf("%lf", &n);
    printf("Digite qual termo voce quer encontrar");
    scanf("%lf", &nt);
    an = a1 * pow(r,(nt-1));
    printf("\n o termo %0.lf eh o numero %0.2lf", nt, an);
    soma = a1 * (1 - pow(r, n)) / (1 - r);
    printf("\nA soma da progressao geometrica eh: %0.2lf\n", soma);

    return 0;
}
