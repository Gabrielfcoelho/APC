#include <stdio.h>
int main()
{
    int n, menor, smenor, tmenor;
    scanf("%d", &n);
    int vet[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &vet[i]);
    }
    menor=smenor=tmenor=10000000;
    for (int i=0; i<n; i++)
    {
        if(vet[i]<menor)
        {
            tmenor=smenor;
            smenor=menor;
            menor=vet[i];
        }
        if(vet[i]>menor && vet[i]<smenor)
        {
            tmenor=smenor;
            smenor=vet[i];
        }
        if(vet[i]>smenor && vet[i]<tmenor)
        {
            tmenor=vet[i];
        } 
    }
    printf("%d\n", smenor);
    printf("%d\n", tmenor);
}