#include <stdio.h>

int contarEstrelas(int qtd, int abertura)
{
    long int brilho;
    int estrelas=0;
    for(int i=0; i<qtd; i++)
    {
        scanf("%ld", &brilho);
        brilho*=abertura;
        if(brilho>=40000000)
        estrelas++;
    }
    return estrelas;
}

/*int main()
{
    int qtd, abertura;
    scanf("%d %d", &qtd, &abertura);
    printf("%d\n", contarEstrelas(qtd,abertura));
}*/