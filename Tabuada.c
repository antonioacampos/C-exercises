#include<stdio.h>
int main()
{
    int firstnum = 1;
    int secnum = 1;
    int result;

    while(firstnum<=10)
        {
            printf("\nTabuada do %d", firstnum);
            secnum = 1;
            while(secnum<=10)
            {
                result = firstnum*secnum;
                printf("\n%d x %d = %d", firstnum, secnum, result);
                secnum++;
            }
            firstnum++;
        }    
}