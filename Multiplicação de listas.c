#include<stdio.h>
int main()
{
    int A[3], B[3], C[3], i, j=0;
    for (i = 0; i < 3; i++)
    {
        printf("Digite o elemento %d da lista A: ", i);
        scanf("%d", &A[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("Digite o elemento %d da lista B: ", i);
        scanf("%d", &B[i]);
    }
    for (i = 0; i < 3; i++)
    {
        C[i] = A[i]*B[i];
    }
    printf("Elementos do vetor C: ");
    for (i=0; i<3; i++)
        printf(" %d ", C[i]);
}