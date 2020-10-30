#include <stdio.h>

int main(){
    int num = 0;

    scanf("%d", &num);
    for(int i = 1; num;){
        if( i % 2 != 0){
            printf("%d ", i);
            i++;
            num--;
        }
        else i++;
    }

    printf("\n");
    return 0;
}