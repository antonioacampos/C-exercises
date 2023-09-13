#include<stdio.h>
int main()
{
    int num1 = 1, num2 = 0, i, result = 0;
    for (i = 0; i < 8; i++)
    {
        printf("%d  ", result);
        result = num1 + num2;
        num1 = num2;
        num2 = result;
    }
    
}