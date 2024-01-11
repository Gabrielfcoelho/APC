#include <stdio.h>

int main(void)
{
    int fil, fi, lug, b2, a, b;
    char b1;
    scanf("%d %d", &fil, &lug);
    fil++, lug++;
    int cine[fil][lug];
    for(int i=0; i<fil; i++)
    {
        for(int j=0; j<lug; j++)
        {
            cine[i][j]=0;
        }
    }
    while(scanf("%c%d", &b1, &b2)!=EOF)
    {
        a=(b1-('A'-1));
        fi=fil-a;
        cine[fi][b2]=1;
    }
    b=('A'+(fil-1));
    for(int i=0; i<fil; i++)
    {
        for(int j=0; j<lug; j++)
        {
            if(i==0  && j==0)
            printf("  ");

            else if(i==0 && j>0)
            printf("%02d ", j);

            else if(i>0 && j==0)
            printf("%c ", b-i);

            else if(cine[i][j]==1)
            printf("XX ");

            else
            printf("-- ");
        }
        printf("\n");
    }
}