#include <stdio.h>

int main(){
    int res, i = 1, mult = 2;

    while (i <= 10){
        res = mult * i;
        printf ("%d x %d = %d\n", mult, i, mult * i);
        i = i + 1;
    }

    return 0;

}