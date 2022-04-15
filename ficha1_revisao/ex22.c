#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int option = 0;
    float imc = 0.0, peso = 0.0, altura = 0.0, pmi = 0.0, pma = 0.0;

    do {
        do {
            printf("-------------------------------- OPCOES ------------------------------------\n");
            printf("----------------------------------------------------------------------------\n");
            printf("| 0 - * Sair (Prima 0)                                                     |\n");
            printf("| 1 - * Calcular IMC e Categoria (Prima 1)                                 |\n"); 
            printf("| 2 - * Calcular peso minimo e peso maximo para categoria normal (Prima 2) |\n");
            printf("----------------------------------------------------------------------------\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &option);
            if (option < 0 || option > 2){
                printf("Opcao invalida! Por favor escolha uma opcao correta... \n");
            }
        } while (option < 0 || option > 2);
            
        switch (option) {
            case 0:
                printf("A terminar...");
                exit(0);
                break;
            case 1:
                printf("Insira o seu peso (kg): ");
                scanf("%f", &peso);
                printf("Insira a sua altura (m): ");
                scanf("%f", &altura);
                imc = peso / pow(altura, 2);
                if (imc < 19){
                    printf("IMC: %f\nCATEGORIA: Magreza\n", imc);
                } else if (imc >= 19 && imc <= 25) {
                    printf("IMC: %f\nCATEGORIA: Normal\n", imc);
                } else if (imc > 25 && imc <= 30) {
                    printf("IMC: %f\nCATEGORIA: Excesso de peso\n", imc);
                } else if (imc > 30 && imc <= 40) {
                    printf("IMC: %f\nCATEGORIA: Obesidade\n", imc);
                } else if(imc > 40) {
                    printf("IMC: %f\nCATEGORIA: Obesidade Morbida\n", imc);
                } else {
                    printf("Erro de leitura..");
                }  
                break;
            case 2:
                printf("Introduza a sua altura: ");
                scanf("%f", &altura);
                pmi = 19 * pow(altura, 2);
                pma = 25 * pow(altura, 2);
                printf("Para alcancar a categoria normal deve ter um peso entre %.2f kg e %.2f kg\n", pmi, pma);
                break;    
            default:
                printf("Erro! Algo correu mal...");
                break;
        }
    } while (option == 1 || option == 2);  
    return 0;
}