#include<stdlib.h>

int main()
{
    float a, pi=3.141592, r;

    printf("Digite o raio do circulo central do campo: ");
    scanf("%f", &r);

    a = (r*r)*pi;

    printf("A area do circulo central do campo e: %.2f metros quadrados\n", a);

    return 0;
}
