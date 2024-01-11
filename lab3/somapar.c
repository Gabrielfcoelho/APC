#include <stdio.h>
int main()
{
    int n1, s = 0;
    do
    {
    scanf("%d", &n1);
    if (n1%2 == 0)
    s=s+n1; 
    }
    while (n1 != 0);
    printf("%d\n", s);
}