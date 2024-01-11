#include <stdio.h>
int main()
{
    int n, menor, indice;
    scanf("%d", &n);
    int vet[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &vet[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
        menor= vet[0];
        indice=0;
        }
        if(vet[i]<menor)
        {
        menor=vet[i];
        indice=i; 
        }     
    }
    printf("%d\n", indice);
}