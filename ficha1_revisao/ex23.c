#include <stdio.h>
#include <stdlib.h>
int main () {
    int plano = 0, tarifario = 0, minMesmaRede = 0, minOutrasRedes = 0, minRedeFixaN = 0, assinatura = 0;
    float mesmaRede = 0.0, outrasRedes = 0.0, redeFixaN = 0.0, precoTotal = 0.0;
    while (plano != 1 && plano != 2) {
        printf("------------------- PLANO DE TARIFARIOS ----------------------\n");
        printf("--------------------------------------------------------------\n");
        printf("| 1 - * Para escolher opcao de cartao recarregavel (Prima 1) |\n");
        printf("| 2 - * Para plano personalizao de precos (Prima 2)          |\n");
        printf("--------------------------------------------------------------\n");
        printf("Escolha o seu plano de tarifario: ");
        scanf("%d", &plano);
        if (plano != 1 && plano != 2){
            printf("\nOpcao Invalida! Por favor escolha uma opcao correta!\n");
        }
    }
    // cartao recarregavel
    if (plano == 1) {
        while (tarifario < 1 || tarifario > 3) {
            printf("\n");
            printf("---------- CARTAO RECARREGAVEL -----------\n");
            printf("------------------------------------------\n");
            printf("| 1 - * Tarifario MYNET (Prima 1)        |\n");
            printf("| 2 - * Tarifario MYFRIENDS (Prima 2)    |\n"); 
            printf("| 3 - * Tarifario MYJOB (Prima 3)        |\n");
            printf("------------------------------------------\n");
            printf("Escolha o seu tarifario: ");
            scanf("%d", &tarifario);
            if (tarifario < 1 || tarifario > 3) {
                printf("\nOpcao Invalida! Por favor escolha uma opcao correta!\n");
            }
        }
        switch (tarifario) {
            case 1:
                mesmaRede = 0.05;
                outrasRedes = 0.50;
                redeFixaN = 0.50;
                break;
            case 2:
                mesmaRede = 0.10;
                outrasRedes = 0.10;
                redeFixaN = 0.50;
                break;
            case 3:
                mesmaRede = 0.05;
                outrasRedes = 0.50;
                redeFixaN = 0.50;
                break;    
            default:
                printf("Opss! Ocorreu um Erro...");
                break;
        }
        //Se os minutos para a mesma rede forem menores que 0 erro e volta a pedir o seu valor
        do { 
            printf("Minutos para a mesma rede: ");
            scanf("%d", &minMesmaRede);
            if (minMesmaRede < 0) {
                printf("Erro! Nao existem minutos negativos!\n");
            }
        } while (minMesmaRede < 0);
        //Se os minutos para outras redes forem menores que 0 erro e volta a pedir o seu valor
        do { 
            printf("Minutos para a outras redes: ");
            scanf("%d", &minOutrasRedes);
            if (minOutrasRedes < 0) {
                printf("Erro! Nao existem minutos negativos!\n");
            }
        } while (minOutrasRedes < 0);
        //Se os minutos para rede fixa nacional forem menores que 0 erro e volta a pedir o seu valor
        do {   
            printf("Minutos para a rede fixa nacional: ");
            scanf("%d", &minRedeFixaN);
            if (minRedeFixaN < 0) {
                printf("Erro! Nao existem minutos negativos!\n");
            }
        } while (minRedeFixaN < 0); 
        precoTotal = (minMesmaRede * mesmaRede) + (minOutrasRedes * outrasRedes) + (minRedeFixaN * redeFixaN);
        printf("Total a pagar : %.2f Euros", precoTotal);
    }
    // plano personalizado de precos 
    else if (plano == 2) {
        while (tarifario < 1 || tarifario > 3) {
            printf("\n");
            printf("----- PLANO PERSONALISAVEL DE PRECOS -----\n");
            printf("------------------------------------------\n");
            printf("| 1 - * Tarifario BASE (Prima 1):        |\n");
            printf("| 2 - * Tarifario SUPER (Prima 2):       |\n"); 
            printf("| 3 - * Tarifario EXECUTIVE (Prima 3):   |\n");
            printf("------------------------------------------\n");
            printf("Escolha o seu tarifario: ");
            scanf("%d", &tarifario);
            if (tarifario < 1 || tarifario > 3) {
                printf("\nOpcao Invalida! Por favor escolha uma opcao correta!\n");
            }
        }
        switch (tarifario) {
            case 1:
                mesmaRede = 0.10;
                outrasRedes = 0.30;
                redeFixaN = 0.30;
                assinatura = 10;
                break;
            case 2:
                mesmaRede = 0.05;
                outrasRedes = 0.20;
                redeFixaN = 0.20;
                assinatura = 15;
                break;
            case 3:
                mesmaRede = 0.05;
                outrasRedes = 0.05;
                redeFixaN = 0.05;
                assinatura = 25;
                break;    
            default:
                printf("Opss! Ocorreu um Erro...");
                break;
        }
        //Se os minutos para a mesma rede forem menores que 0 erro e volta a pedir o seu valor
        do { 
            printf("Minutos para a mesma rede: ");
            scanf("%d", &minMesmaRede);
            if (minMesmaRede < 0) {
                printf("Erro! Nao existem minutos negativos!\n");
            }
        } while (minMesmaRede < 0);
        //Se os minutos para outras redes forem menores que 0 erro e volta a pedir o seu valor
        do { 
            printf("Minutos para a outras redes: ");
            scanf("%d", &minOutrasRedes);
            if (minOutrasRedes < 0) {
                printf("Erro! Nao existem minutos negativos!\n");
            }
        } while (minOutrasRedes < 0);
        //Se os minutos para rede fixa nacional forem menores que 0 erro e volta a pedir o seu valor
        do {   
            printf("Minutos para a rede fixa nacional: ");
            scanf("%d", &minRedeFixaN);
            if (minRedeFixaN < 0) {
                printf("Erro! Nao existem minutos negativos!\n");
            }
        } while (minRedeFixaN < 0);
        precoTotal = (minMesmaRede * mesmaRede) + (minOutrasRedes * outrasRedes) + (minRedeFixaN * redeFixaN) + assinatura;
        printf("Total a pagar : %.2f Euros", precoTotal); 
    }
    return 0;
}