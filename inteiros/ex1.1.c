#include <stdio.h>

int main(){
    int num;
    
    scanf("%d" ,&num);
    for(; num != 0; ){
        printf("%d ", num*num);
        scanf("%d", &num);
    }
    printf("\n");
    return 0;
}