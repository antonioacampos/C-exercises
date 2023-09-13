#include<stdio.h>
int main()
{
    int lin1, col1, lin2, col2, i, j, m, n, elem;
    printf("Digite a quandidade de linhas da matriz A: ");
    scanf("%d", &lin1);
    printf("Digite a quantidade de colunas da matriz A: ");
    scanf("%d", &col1);
    lin2 = col1;
    printf("Digite a quantidade de colunas da matriz B: ");
    scanf("%d", &col2);
    int A[lin1][col1], B[lin2][col2];
    int C[lin1][col2];

    printf("Matriz A:\n");
    for (i = 0; i < lin1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("Digite o elemento da linha %d coluna %d: ", i,j);
            scanf("%d", &A[i][j]);
        }
        
    }
    printf("Matriz B:\n");
    for (i = 0; i < lin2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("Digite o elemento da linha %d coluna %d: ", i,j);
            scanf("%d", &B[i][j]);
        }
        
    }
    i = 0;
    j = 0;
    while (i < lin1){
        j = 0;
        n = 0;
        while (j < col2){
            elem = 0;
            while (n < lin2){
                elem += ((A[i][n]) * (B[n][j]));
                n += 1;
            }
            C[i][j] = elem;
            n = 0;
            j++;
        }
        i++;
}
    printf("Matriz resultado da multiplicação: \n");
    for(i=0; i<lin1; i++)
    {
        for (j=0;j<col2;j++)
        {
            printf(" %d ", C[i][j]);
        }
        printf("\n");
    }
        
}