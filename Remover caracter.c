#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

char remove_carac(char string[40], char carac){
    int len = strlen(string);
    int i, j=0;
    for (i = 0; i < len; i++) {
        if (string[i] != carac) {
            string[j] = string[i];
            j++;
        }
    }

    string[j] = '\0';
    
}

int main(){
    char string[40], carac;
    printf("digite um nome: ");
    gets(string);
    printf("Digite uma letra: ");
    scanf("%c", &carac);
    remove_carac(string, carac);
    printf("%s", string);
}