#include <stdio.h>

#define varconst 100;

int main(){
    int x;
    x = varconst;

    printf("Digite um número e presione Enter:  ");

    scanf("%d", &x);
    printf("Hello word! x = %d", x);

    return 0;
}