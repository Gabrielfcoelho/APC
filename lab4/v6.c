#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int vet[n], vet2[n], vet3[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &vet[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d", &vet2[i]);
    }
    for(int i=0; i<n; i++)
    {
        vet3[i]=vet[i]+vet2[i];
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", vet3[i]);
    }
    printf("\n");
}