#include <stdio.h>

int main(){

    int soma=0, valor=0;
    while (valor!=1000)
    {
        if (valor%2==0)
        {
            ++soma;
        }
        ++valor;
    }
    printf("A soma dos numeros pares entre 0 e 1000 e: %d\n", soma);
    

return 0;    
}