#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int matriz_a[3][4], matriz_b[3][4], numero_vez, i, j, m, n, not_in = 1, num_iguais[12], count_iguais = 0;

    //Preenche a matriz A
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            numero_vez = rand() %101;
            for (m = 0; m < 3; m++)
            {
                for (n = 0; n < 4; n++)
                {
                    if (matriz_a[m][n] == numero_vez & not_in == 1)
                        not_in = 0;
                    else
                        not_in = 1;
                }
            }
            if (not_in == 1)
            {
                matriz_a[i][j] = numero_vez;
            }
        }
    }

    //Preenche a matriz B
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            numero_vez = rand() %101;
            for (m = 0; m < 3; m++)
            {
                for (n = 0; n < 4; n++)
                {
                    if (matriz_b[m][n] == numero_vez & not_in == 1)
                        not_in = 0;
                    else
                        not_in = 1;
                }
            }
            if (not_in == 1)
            {
                matriz_b[i][j] = numero_vez;
            }
        }
    }
    
    //Printa a matriz A
    printf("Matriz A: \n");
    for(i=0; i<3; i++)
    {
        for (j=0;j<4;j++)
        {
            printf(" %d ", matriz_a[i][j]);
        }
        printf("\n");
    }

    //Printa a matriz B
    printf("Matriz B: \n");
    for(i=0; i<3; i++)
    {
        for (j=0;j<4;j++)
        {
            printf(" %d ", matriz_b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++) //Até esse for, percorre a matriz A. i e j serão seus indices.
        {
            for (m = 0; m < 3; m++)
            {
                for (n = 0; n < 4; n++)//daquele pra esse for, percorre a matriz B. m e n serão seus indices.
                {
                    if (matriz_a[i][j] == matriz_b[m][n])
                    {
                        num_iguais[count_iguais] = matriz_a[i][j];
                        count_iguais++;
                    }
                }
            }   
        }
    }
    printf("Número(s) que as duas matrizes compartilham: ");
    for (i = 0; i < count_iguais; i++)
    {
        printf("%d ", num_iguais[i]);
    }   
}