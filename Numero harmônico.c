#include<stdio.h>
int main()
{
    int limite;
    float soma = 0, n = 1, m = 0, frac;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &limite);
    while (n<=limite)
    {
        m = m + n;
        frac = n / m;
        soma = soma + frac;
        n = n + 1;
    }
    printf("A soma total da série é %f", soma);
}