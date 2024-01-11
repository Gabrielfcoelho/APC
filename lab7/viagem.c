#include <stdio.h>

int main() {
    int qtd, dia = 1;
    while ( scanf("%d", &qtd) != EOF ) {
        int mr, mn=-1;
        scanf("%d %d", &mr, &mn);
        for ( int i = 0; i < qtd - 1; i++ ) {
            int r, n;
            scanf("%d %d", &r, &n);

            if ( n > mn ) {
                mn = n;
                mr = r;
            }
            
            else if ( n == mn && r < mr) {
                mr = r;
            }
        }
        printf("Dia %d\n", dia);
        printf("%d\n", mr);
        dia++;
    }

    return 0;
}