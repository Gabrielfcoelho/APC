#include <stdio.h>
int main()
{
    int n, n1, mn;
    scanf("%d", &n);
    for (int p = 1; n > 0; n --, p--)
    {
    scanf("%d", &n1);
    if (p == 1)
    {
    mn = n1;
    }
    if (p < 1)
    {
    if ( n1 > mn)
    mn = n1;
    }
    }
    printf("%d\n", mn);
}