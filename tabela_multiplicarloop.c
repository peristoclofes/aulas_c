#include <stdio.h>

int main() {
    int numero = 2, i;

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}