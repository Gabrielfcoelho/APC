#include <stdio.h>
int main()
{
    int n, x, truth=0;
    scanf("%d", &n);
    int vet[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &x);
    for(int i=0; i<n; i++)
    {
        if(vet[i]==x)
        {
        truth=1;
        break;
        }
    }
    if(truth==1)
    printf("pertence\n");
    else
    printf("nao pertence\n");
}