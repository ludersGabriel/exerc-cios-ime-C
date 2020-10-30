#include <stdio.h>

int main(){
    int n, notas, maior, menor;
    n = notas = maior = menor = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &notas);
        if(notas > maior) maior = notas;
        else if(notas < menor) menor = notas;
    }

    if(!n) printf("Nenhuma nota entrada\n");
    else printf("Maior: %d, Menor: %d\n", maior, menor);

    return 0;
}