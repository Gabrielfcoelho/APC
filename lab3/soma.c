#include <stdio.h>
int main()
{
    int n, n1, s;
    scanf("%d", &n);
    for (int p = 1; n > 0; n--, p--)
    {
    scanf("%d", &n1);
    if (p == 1)
    s = n1;
    if (p < 1)
    s = s + n1;
    }
    printf("%d\n", s);
}