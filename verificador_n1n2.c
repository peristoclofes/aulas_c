#include <stdio.h>
#include <stdbool.h>

int main () {
int n1, n2;

printf("Digite um número: ");
scanf("%d", &n1);

printf("Digite outro número: ");
scanf("%d", &n2);

printf("\n n1 e n2 sao iguais? %s", (n1==n2) ? "verdadeiro" : "falso");
printf("\n n1 e maior que n2? %s", n1>n2 ? "verdadeiro" : "falso");
printf("\n n1 e menor ou igual a n2? %s", n1<=n2 ? "verdadeiro" : "falso");

return 0;

}