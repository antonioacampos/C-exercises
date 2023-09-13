#include<stdio.h>
#include<string.h>
#include<locale.h>

void remove_carac(char string[40]){
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == ' ')
        {
            for (int j = i; j < strlen(string); j++)
                string[j] = string[j+1];
        }
        
    }
}

int anagrama(char string1[40], char string2[40]){

    remove_carac(string1);
    remove_carac(string2);   
    int len1 = strlen(string1);
    int len2 = strlen(string2);
    
    int anagrama;
    if (len1==len2)
        anagrama = 1;
    else
        anagrama = 0;

    int i = 0;
    while (i<len1 && anagrama == 1)
    {
        int j = 0, soma_anagrama = 0;
        while (j<len2 && anagrama==1)
        {
            if (string1[i]==string2[j])
                soma_anagrama++;
            j++;
        }
        if (soma_anagrama == 0)
            anagrama = 0;
        i++;
    }
    
    int k = 0;
    while (k<len2&&anagrama==1)
    {
        int j = 0, soma_anagrama = 0;
        while (j<len2 && anagrama==1)
        {
            if (string2[k]==string1[j])
                soma_anagrama++;
            j++;
        }
        if (soma_anagrama == 0)
            anagrama = 0;
        k++;

        
    }
    return anagrama;
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char string[40], string2[40];
    printf("\nDigite a primeira string: ");
    gets(string);
    printf("\nDigite a segunda string: ");
    gets(string2);
    int anag = anagrama(string, string2);
    if (anag==1)
        printf("%s é um anagrama de %s!", string, string2);
    else
        printf("%s não é um anagrama de %s!", string, string2);
    
}