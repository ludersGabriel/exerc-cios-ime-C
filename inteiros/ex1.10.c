#include <stdio.h>

int main(){
    int num, i, j, k;

    scanf("%d", &num);
    for(i = 1, j = 2, k = 3; i*j*k < num; i++, j++, k++);

    if (i*j*k == num) printf("%d eh triangular\n", num);

    return 0;
}