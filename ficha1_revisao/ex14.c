#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {
    char dec[10];
    int bin[10];
    int stringSize = 0, num = 0, i = 0, contador = 1, num2 = 0;
    printf("Introduza um numero inteiro: \n");
    scanf("%s", &dec);
    stringSize = strlen(dec);
    num = atoi(dec);
    num2 = atoi(dec);
    while (num != 1) {
        num = num / 2;
        contador++;
    }
    for (i = contador; i > -1; i--) {
        bin[i - 1] = num2 % 2;
        num2 = num2 / 2;
    }
    printf("Binario = ");
    for(i = 0; i < contador; i++) {
        printf("%d", bin[i]);
    }
    return 0;
}