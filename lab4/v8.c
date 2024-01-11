#include <stdio.h>
int main()
{
    int n, soma=0, truth=0;
    scanf("%d", &n);
    int vet[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &vet[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(i==0)
        soma=vet[i];
        else
        soma+=vet[i];
    }
    soma/=n;
    for(int i=0; i<n; i++)
    {
        if(vet[i]>soma)
        {
        truth=1;
        printf("%d ", vet[i]);
        }
    }
    if(truth==0)
    printf("0");
    
    printf("\n");
}