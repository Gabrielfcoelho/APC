#include <stdio.h>
int main ()
{
    int B, T, nota, corte;
    scanf("%d", &B);
    scanf("%d", &T);
    nota = 70*160;
    corte = ((B+T)*70)/2;
    if (corte > (nota-corte))
    printf("1\n");
    if (corte < (nota-corte))
    printf("2\n");
    if (corte == (nota-corte))
    printf("0\n");
}