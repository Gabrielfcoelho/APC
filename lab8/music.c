#include <stdio.h>
#include <string.h>

struct tipoMusica{
    char nome[80];
    int ano;
};

struct tipoBanda{
    char nome[80];
    int qtd;
    struct tipoMusica musicas[100];
};

void pesquisarNomeMusica (char pesquisa[80], struct tipoBanda bandas[50], int n)
{
    int aux=1;
    for(int i=0, j=0; i<n && aux!=0; k++)
    {
        strcmp(pesquisa, bandas[i].musicas[j].nome);

    }
}