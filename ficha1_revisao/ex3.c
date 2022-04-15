#include <stdio.h>
#include <math.h>
int main(){
    //w = weight(peso) | h = height (Altura) 
    float w = 0.0, h = 0.0, imc = 0.0, pmi = 0.0, pma = 0.0;
    printf("Indique a sua altura(m): \n");
    scanf("%f", &h);
    printf("Indique o seu peso(kg): \n");
    scanf("%f", &w);
    imc = w/pow(h, 2);
    pmi = 19 * pow(h, 2);
    pma = 25 * pow(h, 2);
    printf("IMC = %f\n", imc);
    if (imc < 19){
        printf("MAGREZA\n");
    } else if (imc >= 19 || imc <= 25){ 
        printf("NORMAL\n");
    } else if (imc > 25 || imc <= 30){
        printf("EXCESSO DE PESO\n");
    } else if (imc > 30 || imc <= 40){    
        printf("OBESIDADE\n");
    } else if (imc > 40){
        printf("OBESIDADE MORBIDA\n");
    }
    printf("PMI = %f\n", pmi);
    printf("PMA = %f\n", pma);
    return 0;
}