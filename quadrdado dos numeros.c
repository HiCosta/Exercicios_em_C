#include <stdio.h>

int main(){

    int num;
    printf("Digite o numero para saber o seu quadrado: "); //entrada do valor pelo usuario
    scanf("%d", &num);      //leitura do valor 

    printf("O quadrado do numero %d e:\n %d", num, num*num);  

}