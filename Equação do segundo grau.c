#include<stdio.h>
#include<math.h>

float delta0(float a, float b, float delta){
    float x1;
    x1 = (- b + sqrt(delta)) / (2*a);
    return x1;
}
float bhaskara(float a, float b, float delta){
    float x2;
    x2 = (- b - sqrt(delta)) / (2*a);
    return x2;
}

float calcDelta(float a, float b, float c){
    float delta;
    if (a==0)
        return -1;
    else{
        delta = (b*b) - (4 * a * c);
        if (delta<0)
            return -2;
        else
            return delta;}
}

int main(){
    float a, b, c, delta, raiz1, raiz2;
    printf("Digite A: ");
    scanf("%f", &a);
    printf("Digite B: ");
    scanf("%f", &b);
    printf("Digite C: ");
    scanf("%f", &c);

    delta = calcDelta(a,b,c);
    if (delta==-1)
        printf("Impossível: A deve ser maior que zero!");
    else if (delta==-2)
        printf("Impossível: Delta é menor que zero!");
    else if (delta>0)
    {
        raiz1 = bhaskara(a,b,delta);
        printf("uma raiz da equação é %.2f e a outr", raiz1);}
    if (delta>=0)
    {
        raiz2 = delta0(a,b,delta);
        printf("a raiz da equação é %.2f", raiz2);
    }
}