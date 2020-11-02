#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);
    for(int i = 2; i < num; i++)
        if(num % i == 0){
            printf("%d nao eh primo\n", num);
            return 0;
        }


    if(!num) printf("0 nao eh primo\n");
    else printf("%d eh primo\n", num);

    return 0;
}