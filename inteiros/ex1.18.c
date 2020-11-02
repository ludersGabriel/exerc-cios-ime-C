#include <stdio.h>
#define or ||
#define and &&

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a + b < c or a + c < b or b + c < a ){
        printf("Os lados %d, %d e %d não formam um triangulo\n", a, b, c);
        return 0;
    }
    
    if(a*a == b*b + c*c or b*b == a*a + c*c or c*c == b*b + a*a){
        printf("Os lados %d, %d e %d formam um triangulo retangulo\n", a, b, c);
        return 0;
    }

    printf("Os lados %d, %d e %d não formam um triangulo retangulo\n", a, b, c);

    return 0;
}