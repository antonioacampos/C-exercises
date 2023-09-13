#include<stdio.h>
int main()
{
    int lin, col, i, j, identidade = 1;
    printf("Digite quantas linhas a matriz terá: ");
    scanf("%d", &lin);
    printf("Digite quantas colunhas a matriz terá: ");
    scanf("%d", &col);
    
    int A[lin][col];
    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Digite o elemento da linha %d coluna %d: ", i,j);
            scanf("%d", &A[i][j]);
        }
        
    }
    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
           if (i==j && A[i][j] == 1 && identidade == 1 || i!=j && A[i][j] == 0 && identidade ==1)
           {
                identidade = 1;
           }
           else
            identidade = 0;
        }
        
    }
    if (identidade == 1)
        printf("A matriz é uma matriz identidade!");
    else
        printf("A matriz não é uma matriz identidade!");
}