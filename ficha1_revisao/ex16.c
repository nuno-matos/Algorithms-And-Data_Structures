#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char num1[10], num2[10];
    int i, stringSize, num1Int, num2Int;
    printf("Insira um numero: \n");
    scanf("%s", &num1);
    stringSize = strlen(num1);
    for(i = stringSize - 1; i > -1; i--) {
        //invert the order of the string to a new string
        num2[(stringSize - 1) - i] = num1[i];
    }
    //convert to int for comparison
    num1Int = atoi(num1);
    num2Int = atoi(num2);
    if (num1Int == num2Int)
        printf("Este numero e capicua");
    else 
        printf("Este numero nao e capicua");
    return 0;
}