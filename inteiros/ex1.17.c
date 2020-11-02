#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* concatenate(char* str, int digit){
    char digitStr[2];
    char* ret = malloc(sizeof(char) * (strlen(str) + 2));
    int i;

    sprintf(digitStr, "%d", digit);

    for(i = 0; i < strlen(str); i++) ret[i] = str[i];
    ret[i] = digitStr[0];
    ret[i+1] = '\0';

    return ret;
}

char* flip_str(char * str){
    char aux; 
    char* ret = malloc(sizeof(char) * (strlen(str)));
    int i = 0;

    for(i = 0; i < strlen(str); i++){
        ret[i] = str[strlen(str) - 1 - i];
    }
    ret[i] = '\0';

    return ret;
}

int main(){
    int num, aux;
    char* bin = "";
    num = aux = 0;

    scanf("%d", &num);
    aux = num;
    for(; num; num = num/2){
        bin = concatenate(bin, num % 2);
    }

    bin = flip_str(bin);

    printf("%d => %d\n", aux, atoi(bin));

    return 0;
}