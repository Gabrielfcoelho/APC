#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if (a == 0 || a == 1 && b == 0 || b == 1 && c == 0 || c == 1)
    {
        if (a != b && a != c)
        printf("A\n");
        if (b != c && b != a)
        printf("B\n");
        if (c != a && c != b)
        printf("C\n");
        if (a == b && b == c && a == c)
        printf("empate\n");
    }
}