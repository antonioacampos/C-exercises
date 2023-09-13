#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int matriz[4][5], i, j, minimo, maximo, linha;

    for ( i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() %10;
        }
    }

    printf("Matriz gerada: \n");
    for(i=0; i<4; i++)
    {
        for (j=0;j<5;j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
    minimo = matriz[0][0];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matriz[i][j] < minimo)
            {
                minimo = matriz[i][j];
                linha = i;
            } 
        }  
    }
    maximo = matriz[linha][0];
    for (i = 0; i < 5; i++)
    {
        if (matriz[linha][i]>maximo)
        {
            maximo = matriz[linha][i];
        }
    }
    printf("\nE o MINMAX dessa matriz é %d", maximo);
}