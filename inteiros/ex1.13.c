#include <stdio.h>

int main(){
    int n, soma;
    n = soma = 0;

    scanf("%d", &n);
    for(int i = 1; i < n; i++){
        if(n % i == 0) soma += i;
    }

    if(n && soma == n) printf("%d eh perfeito\n", n);

    return 0;
}