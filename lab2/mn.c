#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a >= b && a >= c && a >= d)
    printf("%d\n", a);
    if (b > a && b >= c && b >= d)
    printf("%d\n", b);
    if (c > a && c > b && c >= d)
    printf("%d\n", c);
    if (d > a && d > b && d > c)
    printf("%d\n", d);
}