#include <stdio.h>
#include <string.h>
int main ()
{
    char nome [102], pnome[102]={}, snome[102]={};
    fgets(nome,102,stdin);
    nome[strlen(nome)-1]=0;
    int n=strlen(nome)-1;
    char c;
    for(int i=0; nome[i]!=0;i++)
    {
        if(nome[i]>='A' && nome[i]<='Z')
        nome[i]+=32;
    }
    for(int i=0; nome[i]!=' ';i++)
    {
        pnome[i]=nome[i];
    }
    for(int i=0;i<n/2;i++)
    {
        c=nome[i];
        nome[i]=nome[n-i];
        nome[n-i]=c;
    }
    for(int i=0; nome[i]!=' ';i++)
    {
        snome[i]=nome[i];
    }
    n=strlen(snome);
    for(int i=0;i<n/2;i++)
    {
        c=snome[i];
        snome[i]=snome[n-1-i];
        snome[n-1-i]=c;
    }
    printf("%s.%s@unb.br\n", pnome, snome);
}