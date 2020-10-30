#include <stdio.h>

int main(){
    int n, num, sum;
    n = num = sum = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(num % 2 == 0) sum += num;
    }

    if(n) printf("Soma: %d\n", sum);

    return 0;
}