#include <stdio.h>

int main() {
    // É uma boa prática usar 'float' ou 'double' para valores monetários 
    // e porcentagens, pois eles podem ter casas decimais.
    float valor_produto;
    float percentual_desconto;
    float imposto;
    imposto = 0.1;

    // Solicita ao usuário o valor original do produto
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    // Solicita ao usuário o percentual de desconto
    printf("Digite a porcentagem de desconto (apenas o número): ");
    scanf("%f", &percentual_desconto);

    // Calcula o valor do desconto
    float valor_do_desconto = valor_produto * (percentual_desconto / 100);
    float valor_do_imposto = (valor_produto - valor_do_desconto) * imposto;

    // Calcula o preço final subtraindo o desconto do valor original
    float valor_final = valor_produto - valor_do_desconto + valor_do_imposto;

    // Exibe o valor final com o desconto aplicado
    // O "%.2f" garante que o valor seja exibido com duas casas decimais, 
    // ideal para moeda.
    printf("\nO valor do desconto é: R$ %.2f\n", valor_do_desconto);
    printf("\nO valor do imposto de 10% é: R$ %.2f\n", valor_do_imposto);
    printf("\nO valor final com desconto e imposto é: R$ %.2f\n", valor_final);

    return 0;
}