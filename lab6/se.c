#include <stdio.h>

int main (void)
{
    int n, m, tam=0, tam1=0, tam2=0, truth=0;
    scanf("%d %d", &n, &m);
    char palavra[n][82], resposta[m][82];
    for(int i=0; i<n; i++)
    {
        scanf("%s", palavra[i]);
    }
    for(int i=0; i<m; i++)
    {
        scanf("%s", resposta[i]);
    }
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            tam=0;
            tam1=0;
            tam2=0;
            for(int k=0; palavra[j][k]!=0; k++)
            {
                tam1++; 
            }
            for(int k=0; resposta[i][k]!=0; k++)
            {
                tam2++;
            }
            for(int k=0; resposta[i][k]!=0; k++)
            {
                if(tam1==tam2)
                {
                    if(resposta[i][k]==palavra[j][k])
                    tam++;
                }
            }
            if(tam==tam2)
            {
                truth=1;
                break;
            }
        }
    }
    printf("%d\n", truth);
}

