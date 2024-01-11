#include <stdio.h>

int is_primo(int n) { // verifica se um número é primo
    if (n == 1) return 0; // 1 não é primo
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0; // não é primo
    }
    return 1; // é primo
}

int main() {
    int t;
    scanf("%d", &t); // lê a quantidade de casos de teste

    for (int i = 0; i < t; i++) {
        int n, teste = 1;
        scanf("%d", &n); // lê o número a ser testado

        while (n > 0) {
            if (!is_primo(n)) { // se não for primo
                teste = 0; // marca como não primo arrojado
                break; // sai do loop
            }
            n /= 10; // remove o último dígito
        }

        if (teste) printf("S\n"); // é primo arrojado
        else printf("N\n"); // não é primo arrojado
    }

    return 0;
}