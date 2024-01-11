//#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
    double tempo, velocidade;
    tempo=(tB-tA)/3600.0;
    velocidade=distancia/tempo;
    return velocidade;
}

int levouMulta(int tA, int tB, double distancia, double velmax)
{
    double velmedia= calculaVelocidadeMedia(tA, tB, distancia);
    if(velmedia>velmax)
    return 1;
    else
    return 0;
}

/*int main()
{
    int tA, tB;
    double distancia, velmax;
    scanf("%d %d %lf %lf", &tA, &tB, &distancia, &velmax);
    printf("%d\n", levouMulta(tA,tB,distancia,velmax));
    return 0;
}*/