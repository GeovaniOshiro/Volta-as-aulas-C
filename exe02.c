#include <stdio.h>

int main() {
    int numero;

    // Mensagem de boas-vindas
    printf("*****************************************\n");
    printf("*      Comparador de Numeros com 20      *\n");
    printf("*****************************************\n");

    // Solicita ao usuário que informe um número
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    // Adiciona uma linha separadora para a visualização
    printf("\n-----------------------------------------\n");

    // Verifica se o número é igual, menor ou maior que 20
    if (numero == 20) {
        printf("O numero %d e igual a 20.\n", numero);
    } else if (numero < 20) {
        printf("O numero %d e menor que 20.\n", numero);
    } else {
        printf("O numero %d e maior que 20.\n", numero);
    }

    // Adiciona uma linha separadora no final
    printf("-----------------------------------------\n");

    return 0;
}
