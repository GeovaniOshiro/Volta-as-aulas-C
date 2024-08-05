#include <stdio.h>

int main() {
    char tipoCarro;
    float kmPercorridos;
    float consumoEstimado;

    // Mensagem de boas-vindas
    printf("*****************************************\n");
    printf("*      Cálculo de Consumo de Carro      *\n");
    printf("*****************************************\n");

    // Solicita ao usuário o tipo do carro
    printf("\nInforme o tipo do carro (A, B ou C): ");
    scanf(" %c", &tipoCarro);

    // Solicita ao usuário a quilometragem percorrida
    printf("Informe o número de quilômetros percorridos: ");
    scanf("%f", &kmPercorridos);

    // Calcula o consumo estimado baseado no tipo de carro
    switch (tipoCarro) {
        case 'A':
            consumoEstimado = kmPercorridos / 8.0;
            break;
        case 'B':
            consumoEstimado = kmPercorridos / 9.0;
            break;
        case 'C':
            consumoEstimado = kmPercorridos / 12.0;
            break;
        default:
            printf("\nErro: Tipo de carro inválido. Use 'A', 'B' ou 'C'.\n");
            return 1; // Encerra o programa com código de erro
    }

    // Exibe o resultado
    printf("\n*****************************************\n");
    printf("*           Resultados do Cálculo       *\n");
    printf("*****************************************\n");
    printf("* Tipo do Carro:          %c             *\n", tipoCarro);
    printf("* Quilômetros Percorridos: %.2f         *\n", kmPercorridos);
    printf("* Consumo Estimado:       %.2f litros    *\n", consumoEstimado);
    printf("*****************************************\n");

    return 0;
}


