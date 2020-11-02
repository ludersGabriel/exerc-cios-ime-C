#include <stdio.h>
#include <math.h>

int main(){
    int num, sum, aux;
    num = sum = aux = 0;

    scanf("%d", &num);
    aux = num;
    for(int i = 0; num; i++){
        sum += pow(2, i) * (num % 10);
        num = num / 10;
    }

    printf("%d => %d\n", aux, sum);

    return 0;
}