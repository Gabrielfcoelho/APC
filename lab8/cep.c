#include <stdio.h>
//#include <string.h>

struct tipoLogradouro{
    char tipo[80];
    char nome[80];
    char complemento[80];
};

void criaLinhaCSV(struct tipoLogradouro info, char linha[240])
{
    int i;
    for(i=0; info.tipo[i]!=0; i++)
    {
        linha[i]=info.tipo[i];
    }
    linha[i]=';';
    i++;
    for(int a=0; info.nome[a]!=0; a++, i++)
    {
        linha[i]=info.nome[a];
    }
    linha[i]=';';
    i++;
    for(int a=0; info.complemento[a]!=0; a++, i++)
    {
        linha[i]=info.complemento[a];
    }
    linha[i]=0;
    return linha;
}

/*int main()
{
    char linha[240]={};
    struct tipoLogradouro info;
    strcpy(info.tipo,"Rua");
    strcpy(info.nome,"Afonso Camargo");
    strcpy(info.complemento,"Loja B");
    criaLinhaCSV(info,linha);
}*/