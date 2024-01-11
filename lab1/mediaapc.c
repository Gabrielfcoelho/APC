#include <stdio.h>

int main(void)
{
    //Conseguir o valor das variáveis com o usuário
    //Conseguir os valores de Pi
    float P1, P2, P3;
    scanf("%f %f %f", &P1, &P2, &P3);
    if (P1 >= 0 && P1 <= 10 && P2 >= 0 && P2 <= 10 && P3 >= 0 && P3 <= 10)
    {
    //Conseguir os valores de T
    float T;
    scanf("%f", &T);
    if ( 0<= T && T <= 10)
    {
    //Conseguir os valores de Lj
    float L1, L2, L3, L4, L5;
    scanf("%f %f %f %f %f", &L1, &L2, &L3, &L4, &L5);
    if (0 <= L1 && L1 <= 1 && 0 <= L2 && L2 <= 1 && 0 <= L3 && L3 <= 1 && 0 <= L4 && L4 <= 1 && 0 <= L5 && L5 <=1)
    {
    //Calcular a média final de APC
    float MF = (P1 + 2 * P2 + 3 * P3 + 2 * T)/8.00 + (L1 + L2 + L3 + L4 + L5)/10.00;
    printf("%.2f\n", MF);
    }
    return 0;
    }
    return 0;
    } 
    return 0;
}