#include <stdio.h>

int main(){ 
    int x, n, num = 1;
    x = n = 0;

    scanf("%d %d", &x, &n);

    for(int i = 0; i < n; i ++) num *= x;

    printf("%d\n", num);

    return 0;
}