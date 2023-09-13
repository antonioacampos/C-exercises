#include<stdio.h>
int main()
{
    int numorig;
    int num;
    int fat = 1;
    printf("Digite um número: ");
    scanf("%d", &numorig);
    num = numorig;
    while (num>1)
    {
        fat = fat * num;
        num = num - 1;
    }
    printf("O fatorial de %d é: %d", numorig, fat);
}