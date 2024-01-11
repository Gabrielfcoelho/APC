#include <stdio.h>
int main(void)
{
    int X, A, a, B, b, C, c, D, d, E, e, F, f;
    int P, V;
    scanf("%d", &P);
    scanf("%d", &V);
    if ( P >= 0 && P <= 1000000 && V >= 0 && V <= 1000000 && P <= V )
    {
        int X = V - P;
        int A = X % 500;
        int a = X / 500;
        int B = A % 100;
        int b = A / 100;
        int C = B % 50;
        int c = B / 50;
        int D = C % 10;
        int d = C / 10;
        int E = D % 5;
        int e = D / 5;
        int F = E % 1;
        int f = E / 1;
        printf("%d\n", a);
        printf("%d\n", b);
        printf("%d\n", c);
        printf("%d\n", d);
        printf("%d\n", e);
        printf("%d\n", f);
    }
    return 0;
}