#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nomes[10][40], i, j;
    //input
    printf("Insira 10 nomes: \n");
    for (i=0;i<10;i++)
    {
    	gets(nomes[i]);
	}
	//buuble sort com strings
	char aux[40];
	for (i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if (strcmp(nomes[i], nomes[j]) > 0)
			{
				strcpy(aux, nomes[i]);
				strcpy(nomes[i], nomes[j]);
				strcpy(nomes[j], aux);
			}
		}
	}
	//print ordenados
	printf("\n\n");
	for (i=0;i<10;i++)
	{
		printf("%d:%s\n",i,nomes[i]);
	}

    // Exercício 4
    char letra;
    int len, achou;
    
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("\nNomes com %c:", letra);
    for (i = 0; i < 10; i++)
    {
        len = strlen(nomes[i]);
        achou = 0;
        j = 0;
        while (j<len && achou == 0)
        {
            if (letra == nomes[i][j])
            {
                printf("\n%s", nomes[i]);
                achou = 1;
            }
            j++;
        }
        
    }
    
}
