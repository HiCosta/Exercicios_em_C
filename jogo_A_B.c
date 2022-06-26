#include<stdlib.h>

int main()
{
    int jogadorA, jogadorB;

    printf("Jogador A lanca o dado: ");
    scanf("%d", &jogadorA);
    printf("Jogador B lanca o dado: ");
    scanf("%d", &jogadorB);

    jogadorA = jogadorB;
    jogadorB = jogadorB;

    printf("o jogador A devera andar %d casas.\nO jogador B devera andar %d casas.", jogadorA, jogadorB);
    return 0;
}
