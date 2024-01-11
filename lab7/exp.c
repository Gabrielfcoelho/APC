#include <stdio.h>

double numerador(int x, int n)
{
    int num;
    for(int i=0; i<n-1; i++)
    {
        if(i==0)
        num = x * x;
        else
        num= num * x;
    }
    return num;
}
double divisor(int n)
{
     for(int i=n-1; i>0; i--)
    {
        n = n * i;
    }
    return n;
}
double exp_natural(int base, int exp)
{
    double euler= 1+base;
    for (int i=2; i<= exp; i++)
    {
        euler+= numerador(base, i)/ divisor(i);   
    }
    return euler;
}

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%lf\n", exp_natural(x, n));
}