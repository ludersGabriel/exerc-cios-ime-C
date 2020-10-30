#include <stdio.h>

int main(){
    int n, i, j;
    n = i = j = 0;

    scanf("%d %d %d", &n, &i, &j);
    for(int k = 0; n > 0; k++){
        if(k % i == 0 || k % j ==0){
            printf("%d ", k);
            n--;
        }
    }

    printf("\n");
    return 0;
}