#include <stdio.h>
int main()
{
 unsigned long long int cpf;
 long int a, b, c, d, e, f, g, h, i, j, k, m, n, o, p, q, r, s, t, u, v, w, x, y, z, A, B, C, D, E, F, G, H, I, divisor = 10000000000;
 scanf("%llu", &cpf);
 if (cpf > 0 && cpf < 99999999999)
 {
long int a = cpf / divisor;
 long  int b = cpf - a * divisor;
 long int c = b / (divisor/10);
 long int d = b - c * (divisor/10);
 long int e = d / (divisor/100);
 long int f = d - e * (divisor/100);
 long int g = h / (divisor/1000);
 long int h = h - j * (divisor/1000);
 long int i = k / (divisor/10000);
 long int j = k - m * (divisor/10000);
 long int k = n / (divisor/100000);
 long int l = n - p * (divisor/100000);
 long int m = q / (divisor/1000000);
 long int n = q - s * (divisor/1000000);
 long int o = t / (divisor/10000000);
 long int p = t - v * (divisor/10000000);
 long int q = w / (divisor/100000000);
 long int r = w - y * (divisor/100000000);
 long int s = z / (divisor/1000000000);
 long int t = z - B * (divisor/1000000000);
 long int u = C / (divisor/10000000000);
 long int v = C - E * (divisor/10000000000);
 long int H = (a*10 + d*9 + g*8 + j*7 + m*6 + p*5 + s*4 + v*3 + y*2)%11 - 11;
 long int I = (a*11 + d*10 + g*9 + j*8 + m*7 + p*6 + s*5 + v*4 + y*3 + B*2)% 11 - 11;
 if (H < 0)
 H *= -1;
 if (I < 0)
 I *= -1;
 if (H == 10)
 H = 0;
 if (I == 10)
 I = 0;
 if (H == D && I == G)
 printf("valido\n");
 else
 printf("invalido\n");
 }
}