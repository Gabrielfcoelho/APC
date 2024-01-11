#include <stdio.h>
int main()
{
int t, n, d=0;
scanf("%d", &t);
while(t>0)
{
    scanf("%d", &n);
    if(n==1)
    printf("N\n");
    if(n<10 && n>1)
    {
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        d++;
    }
    if(d==0)
    printf("S\n");
    else
    printf("N\n");
    }
    if (n>9)
    {
        while(n>1)
        {
            for(int j=2; j<n; j++)
            {
            if(n%j==0)
            d++;
            }
            n/=10;
        }
        if(n==1)
        printf("N\n");
        if(n!=1)
        {
        if(d==0)
        printf("S\n");
        else
        printf("N\n");
        }
        d=0;
    }
 t--;
}
}