#include <stdio.h>
int main(void)
{
    long int h, m, s;
    scanf("%ld", &h);
    if ( h >= 0 && h <= 4294967295 )
    {
    long int m = h * 60;
    long int s = m * 60;
    printf("%ld\n", m);
    printf("%ld\n", s);
    }
}