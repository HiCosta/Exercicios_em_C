#include <stdlib.h>

int main()
{
    int A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, matriz [4][16], x, y;
    A = matriz[0][1];
    B = matriz[0][2];
    C = matriz[0][3];
    D = matriz[0][4];
    E = matriz[0][5];
    F = matriz[0][6];
    G = matriz[0][7];
    H = matriz[0][8];
    I = matriz[0][9];
    J = matriz[0][10];
    K = matriz[0][11];
    L = matriz[0][12];
    M = matriz[0][13];
    N = matriz[0][14];
    O = matriz[0][15];
    P = matriz[0][16];


    printf("Digite o numero de gols em ordem alfabetica dos times: \n\n");

    for (x = 0; x <= 16; x++)
        for(y = 0; y <= 4; y++)
    {
        printf("\nJogo [%d][%d] = ", x, y);
        scanf("%d", &matriz[x][y]);
    }
    
    printf("\n\n--------------------Saida de dados--------------------\n\n");

    
    return 0;
}

