#include<stdio.h>
int main()
{
    int A[3][3], i, j, simetrica = 1;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento da linha %d coluna %d: ", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (A[i][j] == A[j][i] && simetrica == 1)
            {
                simetrica = 1;
            }
            else
                simetrica = 0; 
        }
    }
    if (simetrica == 1)
    {
        printf("A matriz é simétrica!");
    }
    else
        printf("A matriz não é simétrica!");
}