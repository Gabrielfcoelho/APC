#include <stdio.h>
#include <string.h>
int main()
{
    char risada[60],r1[60]={},r2[60]={};
    int c=0;
    fgets(risada,60,stdin);
    risada[strlen(risada)-1]=0;
    for(int i=0; risada[i]!=0;i++)
    {
        if(risada[i]=='a' || risada[i]=='e'|| risada[i]=='i' || risada[i]=='o' || risada[i]=='u')
        {       
        r1[c]=risada[i];
        c++;
        }
    }
    for(int i=0;r1[strlen(r1)-1-i]!=0;i++)
    {
        r2[i]=r1[strlen(r1)-1-i];
    }
    c=0;
    for(int i=0; r1[i]!=0; i++)
    {
        if(r1[i]!=r2[i])
        {
        c=1;
        break;
        }
    }
    if(c==0 && r1[0]!=0)
    printf("S\n");
    if(c==1 && r1[0]!=0)
    printf("N\n");
    if(r1[0]==0)
    printf("Valor invalido!\n");
}