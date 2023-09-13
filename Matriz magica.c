#include<stdio.h>
int main()
{
    int matriz[3][3], i, j, soma_linha[3], elem = 0, quad_mag = 1;
    int soma_col[3], soma_diag = 0, soma_diag_inv = 0, ref;
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        
    }
    for (i = 0; i < 3; i++)
    {   elem = 0;
        for (j = 0; j < 3; j++)
        {
            elem += matriz[i][j];
        }
        soma_linha[i] = elem;
    }

    ref = soma_linha[0]; //Define o valor de referência para todas as somas da matriz

    for (i = 0; i < 2; i++)
    {
        if (soma_linha[i] == ref && quad_mag == 1)
        {
            quad_mag = 1;
        }
        else
            quad_mag = 0;
    }

    if (quad_mag == 1)
    {
        for (i = 0; i < 3; i++)
        {   elem = 0;
            for (j = 0; j < 3; j++)
            {
                elem += matriz[j][i];
            }
            soma_col[i] = elem;
        } 
        for (i = 0; i < 2; i++)
        {
            if (soma_col[i] == ref && quad_mag == 1)
            {
                quad_mag = 1;
            }
            else
                quad_mag = 0;
        }
    }

    if (quad_mag == 1)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (i == j)
                {
                    soma_diag += matriz[i][j];
                }
                
            }
            
        }
        if (soma_diag == ref)
            quad_mag = 1;
        else
            quad_mag = 0;
    }

    if (quad_mag == 1)
    {
            for (i = 0; i < 3; i++)
            {
                j = 3 - 1 - i;
                soma_diag_inv += matriz[i][j];
            }
            if (soma_diag_inv == ref)
                quad_mag = 1;
            else
                quad_mag = 0;
    }
    if (quad_mag == 1)
        printf("Essa matriz é uma matriz mágica!");
    else
        printf("Essa matriz não é uma matriz mágica!");
}