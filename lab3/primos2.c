#include <stdio.h>
int main()
{
long int t, n, d=0;
scanf("%ld", &t);
while(t>0)
{
    scanf("%ld", &n);
    if(n==1)
    printf("N\n");
    if(n!=1)
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
    else
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
return 0;
}