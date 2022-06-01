#include <stdlib.h>

int main()
{
    int A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, jogo1, jogo2, jogo3, jogo4, jogo5, jogo6, jogo7, jogo8, jogo9, jogo10, jogo11, jogo12, jogo13, jogo14, jogo15;

    printf("------------------------------------------");
    printf("\nOitavas de final\n");
    printf("------------------------------------------");
    
    printf("\nResultado do jogo 1:\n");
    scanf("%d %d", &A, &B);

    if (A > B)
    {
        jogo1 = A;
    }
    else
        jogo1 = B;
    

    printf("\nResultado do jogo 2:\n");
    scanf("%d %d", &C, &D);

    if (C > D)
    {
        jogo2 = C;
    }
    else
        jogo2 = D;

    printf("\nResultado do jogo 3:\n");
    scanf("%d %d", &E, &F);

    if (E > F)
    {
        jogo3 = E;
    }
    else
        jogo3 = F;

    printf("\nResultado do jogo 4:\n");
    scanf("%d %d", &G, &H);

    if (G > H)
    {
        jogo4 = G;
    }
    else
        jogo4 = H;

    printf("\nResultado do jogo 5:\n");
    scanf("%d %d", &I, &J);

    if (I > J)
    {
        jogo5 = I;
    }
    else
        jogo5 = J;

    printf("\nResultado do jogo 6:\n");
    scanf("%d %d", &K, &L);

    if (K > L)
    {
        jogo6 = K;
    }
    else
        jogo6 = L;

    printf("\nResultado do jogo 7:\n");
    scanf("%d %d", &M, &N);

    if (M > N)
    {
        jogo7 = M;
    }
    else
        jogo7 = N;

    printf("\nResultado do jogo 8:\n");
    scanf("%d %d", &O, &P);

    if (O > P)
    {
        jogo8 = O;
    }
    else
        jogo8 = P;

    printf("------------------------------------------");
    printf("\nQuartas de final\n");
    printf("------------------------------------------");

    if (jogo1 > jogo2)
    {
        jogo9 == jogo1;
    }
    else
        jogo9 == jogo2;

    if (jogo3 > jogo4)
    {
        jogo10 == jogo3;
    }
    else
        jogo10 == jogo4;

    if (jogo5 > jogo6)
    {
        jogo11 == jogo5;
    }
    else
        jogo11 == jogo6;

    if (jogo7 > jogo8)
    {
        jogo12 == jogo7;
    }
    else
        jogo12 == jogo8;

    printf("------------------------------------------");
    printf("\nSemi-final\n");
    printf("------------------------------------------");

    if (jogo9 > jogo10)
    {
        jogo13 == jogo9;
    }
    else
        jogo13 == jogo10;

    if (jogo11 > jogo12)
    {
        jogo14 == jogo11;
    }
    else
        jogo14 == jogo12;

    printf("------------------------------------------");
    printf("\nFinal\n");
    printf("------------------------------------------");

    if (jogo13 > jogo14)
    {
        jogo15 == jogo13;
    }
    else
        jogo15 == jogo14;

    printf("\nO campeao do campeonato foi o time: ", jogo15);

    return 0;
}

