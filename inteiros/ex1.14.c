#include <stdio.h>

int main(){
    int a, b, soma, num;
    a = b = soma = 0;

    scanf("%d", &num);

    if(num == 1 || num == 2){
        printf("F%d eh 1\n", num);
        return 0;
    }

    a = 1; b = 1;
    for(int i = 3; i <= num; i++){
        soma = a + b;
        a = b; 
        b = soma;
    }

    printf("F%d eh: %d\n", num, soma);

    return 0;
}