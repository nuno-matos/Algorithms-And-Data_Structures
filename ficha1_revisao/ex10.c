#include <stdio.h>
#include <string.h>
int main(){
    char inteiro[10];
    //0 to 65,535 or 0 to 4,294,967,295
    unsigned int num = 0;
    int tamanhoString = 0, i = 0, soma = 0;
        printf("Introduza um numero(inteiro positivo): \n");
        scanf("%s", &inteiro);
        tamanhoString = strlen(inteiro);
        for(i; i < tamanhoString; i++){
            num = inteiro[i] - '0';
            soma = soma + num;
        }
        printf("Soma = %d", soma);
    return 0;
}