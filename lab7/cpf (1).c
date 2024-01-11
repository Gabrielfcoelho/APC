#include <stdio.h>

int main() {
    unsigned long long int cpf;
    scanf("%llu", &cpf);

    // Extrai os dígitos do CPF
    int digito[11];
    for (int i = 10; i >= 0; i--) {
        digito[i] = cpf % 10;
        cpf /= 10;
    }

    // Calcula o primeiro dígito verificador
    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += digito[i] * (10 - i);
    }
    int resto = soma % 11;
    int digito1 = (resto < 2) ? 0 : 11 - resto;

    // Verifica o primeiro dígito verificador
    if (digito1 != digito[9]) {
        printf("invalido\n");
        return 0;
    }

    // Calcula o segundo dígito verificador
    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += digito[i] * (11 - i);
    }
    resto = soma % 11;
    int digito2 = (resto < 2) ? 0 : 11 - resto;

    // Verifica o segundo dígito verificador
    if (digito2 != digito[10]) {
        printf("invalido\n");
        return 0;
    }

    printf("valido\n");
    return 0;
}