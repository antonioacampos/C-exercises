#include<stdio.h>
#include<string.h>
int main(){
    char frase[100], invertida[100];
    int palindromo;

    printf("Digite uma frase: ");
    fflush(stdin);
    gets(frase);
    strcpy(invertida, frase);
    strrev(invertida);
    palindromo = strcmp(frase, invertida);
    if (palindromo==0)
        printf("A frase é um palindromo!");
    else
        printf("A frase não é um palindromo!");
}