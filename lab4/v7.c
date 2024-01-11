#include <stdio.h>
int main()
{
    int n, truth=0;
    scanf("%d", &n);
    int vet[n], vet2[n];
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
        if(vet[i]!=vet2[i])
        {
        truth=1;
        break;
        }
    }
    if(truth==1)
    printf("nao\n");
    else
    printf("sim\n");
}