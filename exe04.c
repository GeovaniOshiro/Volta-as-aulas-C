#include <stdio.h>

int main() {
    int num1, num2, soma;

    // Mensagem de boas-vindas
    printf("*****************************************\n");
    printf("*         Verificação de Soma > 50      *\n");
    printf("*****************************************\n");

    // Solicita ao usuário os dois números
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Calcula a soma dos números
    soma = num1 + num2;

    // Adiciona uma linha separadora para a visualização
    printf("\n-----------------------------------------\n");

    // Verifica se a soma é maior que 50 e exibe o resultado
    if (soma > 50) {
        printf("Resultado da Soma: %d\n", soma);
   	 } else {
        printf("A soma dos numeros e %d, que nao e maior que 50.\n", soma);
    }

    // Adiciona uma linha separadora no final
    printf("-----------------------------------------\n");

    return 0;
}
