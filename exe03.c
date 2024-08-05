#include <stdio.h>

int main() {
    float valorCompra, valorVenda;
    float lucroPercentual;

    // Mensagem de boas-vindas
    printf("*****************************************\n");
    printf("*       Cálculo de Valor de Venda        *\n");
    printf("*****************************************\n");

    // Solicita ao usuário o valor de compra do produto
    printf("\nDigite o valor de compra do produto (R$): ");
    scanf("%f", &valorCompra);

    // Adiciona uma linha separadora para a visualização
    printf("\n-----------------------------------------\n");

    // Define o percentual de lucro baseado no valor de compra
    if (valorCompra < 20.00) {
        lucroPercentual = 0.45;  // 45% de lucro
   	 } else {
        lucroPercentual = 0.30;  // 30% de lucro
    }

    // Calcula o valor de venda
    valorVenda = valorCompra * (1 + lucroPercentual);

    // Exibe o resultado formatado
    printf("Valor de Compra: R$ %.2f\n", valorCompra);
    printf("Percentual de Lucro: %.0f%%\n", lucroPercentual * 100);
    printf("Valor de Venda: R$ %.2f\n", valorVenda);

    // Adiciona uma linha separadora no final
    printf("-----------------------------------------\n");

    return 0;
}
