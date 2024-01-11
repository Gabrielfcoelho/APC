#include <stdio.h>

int main() {
    int jogadorA, jogadorB;
    scanf("%d %d", &jogadorA, &jogadorB); // Leitura dos valores escolhidos pelos jogadores

    // Verificação do vencedor
    if (jogadorA == jogadorB) {
        printf("empate\n"); // Empate se ambos escolheram o mesmo símbolo
    } else {
        switch (jogadorA) {
            case 0: // Pedra
                if (jogadorB == 2 || jogadorB == 3) {
                    printf("A\n"); // Pedra ganha de Tesoura e Lagarto
                } else {
                    printf("B\n"); // Outros casos, B ganha
                }
                break;
            case 1: // Papel
                if (jogadorB == 0 || jogadorB == 4) {
                    printf("A\n"); // Papel ganha de Pedra e Spock
                } else {
                    printf("B\n"); // Outros casos, B ganha
                }
                break;
            case 2: // Tesoura
                if (jogadorB == 1 || jogadorB == 3) {
                    printf("A\n"); // Tesoura ganha de Papel e Lagarto
                } else {
                    printf("B\n"); // Outros casos, B ganha
                }
                break;
            case 3: // Lagarto
                if (jogadorB == 1 || jogadorB == 4) {
                    printf("A\n"); // Lagarto ganha de Papel e Spock
                } else {
                    printf("B\n"); // Outros casos, B ganha
                }
                break;
            case 4: // Spock
                if (jogadorB == 0 || jogadorB == 2) {
                    printf("A\n"); // Spock ganha de Pedra e Tesoura
                } else {
                    printf("B\n"); // Outros casos, B ganha
                }
                break;
        }
    }

    return 0;
}