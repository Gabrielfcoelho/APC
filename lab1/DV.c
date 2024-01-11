#include <stdio.h>
int main(void)
{
    int conta, a, b, c, d, e, f, g, A, B, C, D, E, F;
    scanf("%d", &conta);
    if ( conta >= 000001 && conta <= 999998 )
    {
        int a = conta / 100000;
        int A = conta - a * 100000;
        int b = A / 10000;
        int B = A - b * 10000;
        int c = B / 1000;
        int C = B - c * 1000;
        int d = C / 100;
        int D = C - d * 100;
        int e = D / 10;
        int E = D - e * 10;
        int f = E;
        int F = ( a * 7 + b * 6 + c * 5 + d * 4 + e * 3 + f * 2) % 11 -11;
        if ( F < 0 )
        {
        int g = F * -1;
        printf("%d\n", g);
        }
        else
        {
        printf("%d\n", F);
        }
        }
}