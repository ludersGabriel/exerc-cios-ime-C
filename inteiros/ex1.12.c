#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, num1, num2, dif;
    a = b = num1 = num2 = dif = 0;

    scanf("%d %d", &num1, &num2);
    a = num1; b = num2;

    dif = abs(num1 - num2);
    for(; dif; ){
        num1 = num2;
        num2 = dif;
        dif = abs(num1 - num2);
    }

    printf("mdc entre %d e %d eh: %d\n", a, b, num1);

    return 0;
}