#include <stdio.h>

int main(void)
{
    double X, X2, P1, P2;
    scanf("%lf", &X);
    scanf("%lf", &X2);
    scanf("%lf %lf", &P1, &P2);
    if ( X >= 0 && X <= 1000000000 && X2 >= 0 && X2 <= 1000000000 && P1 >= 0 && P1 <= 100 && P2 >= 0 && P2 <= 100)
    {
        double X1 = (X * (P1 + P2) - (X2 * P2)) / P1;
        printf("%lf\n", X1);
    }
}