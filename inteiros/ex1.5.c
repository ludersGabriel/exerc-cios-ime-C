#include <stdio.h>

// versão simplificada para uma stream de inteiros qualquer terminada em -1

int main(){
    int num, maior, dia;
    num = 0; dia = maior = -2;

    scanf("%d", &num);
    for(int i = 1; num != -1; i++){
        if(num > maior){
            maior = num;
            dia = i;
        }
        scanf("%d", &num);
    }

    if (maior == -2) printf("Nenhum dado foi entrado\n");
    else printf("Maior dia: %d, Discos = %d\n", dia, maior);

    return 0;
}