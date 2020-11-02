#include <stdio.h>

int main(){
    int n, j, m;

    scanf("%d %d %d", &n, &j, &m);
    for(int i = 1; n > 0; i++){
        if(i % m == j % m){
            printf("%d ", i);
            n--;
        }
    }

    printf("\n");
    return 0;
}