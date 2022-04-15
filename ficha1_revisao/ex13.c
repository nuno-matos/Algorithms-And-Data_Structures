#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char bin[10];
    int decimal = 0, i = 0, stringSize = 0, number = 0;
    printf("Introduza um numero binario: \n");
    scanf("%s", &bin);
    stringSize = strlen(bin);
    number = bin[i] - '0';
    decimal = number * pow(2, stringSize - 1);
    i++;
    for (i; i < stringSize; i++){
        number = bin[i] - '0';
        decimal = decimal + (number * pow(2, stringSize - (i + 1)));
    }
    printf("Decimal = %d", decimal);
    return 0;
}