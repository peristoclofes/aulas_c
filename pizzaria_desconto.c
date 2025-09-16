#include <stdio.h>

int main() {
    float valor_produto;
    float quantidade_pessoas;
    float percentual_desconto;

    // Solicita ao usuário o valor original do produto
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    // Solicita ao usuário o percentual de desconto
    printf("Digite a quantidade de pessoas: ");
    scanf("%f", &quantidade_pessoas);

    // Solicita ao usuário o percentual de desconto
    printf("Digite a porcentagem de desconto (apenas o número): ");
    scanf("%f", &percentual_desconto);

    // Calcula o valor do desconto
    float valor_do_desconto = valor_produto * (percentual_desconto / 100);

    // Calcula o preço final subtraindo o desconto do valor original
    float valor_final = valor_produto - valor_do_desconto;
    float valor_final_pessoas = valor_final / quantidade_pessoas;

    // Exibe o valor final com o desconto aplicado
    // O "%.2f" garante que o valor seja exibido com duas casas decimais, 
    // ideal para moeda.
    printf("\nO valor do desconto é: R$ %.2f\n", valor_do_desconto);
    printf("\nO valor total final é: R$ %.2f\n", valor_final);
    printf("\nO valor dividido entre as pessoas da mesa é: R$ %.2f\n", valor_final_pessoas);

    return 0;
}