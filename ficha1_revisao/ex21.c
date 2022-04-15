#include <stdio.h>
#include <stdlib.h>
int main () {
    int plano = 0, tarifario = 0, minMesmaRede = 0, minOutrasRedes = 0, minRedeFixaN = 0, assinatura = 0;
    float mesmaRede = 0.0, outrasRedes = 0.0, redeFixaN = 0.0, precoTotal = 0.0;
    printf("------------------- PLANO DE TARIFARIOS ----------------------\n");
    printf("--------------------------------------------------------------\n");
    printf("| 1 - * Para escolher opcao de cartao recarregavel (Prima 1) |\n");
    printf("| 2 - * Para plano personalizao de precos (Prima 2)          |\n");
    printf("--------------------------------------------------------------\n");
    printf("Escolha o seu plano de tarifario: ");
    scanf("%d", &plano);
    // Se plano for diferente de 1 ou 2 imprimi opcao invalida e termina o programa
    if (plano < 1 || plano > 2) {
        printf("Opcao invalida!\n");
        exit(0);
    }
    if (plano == 1) {
        printf("\n");
        printf("---------- CARTAO RECARREGAVEL -----------\n");
        printf("------------------------------------------\n");
        printf("| 1 - * Tarifario MYNET (Prima 1)        |\n");
        printf("| 2 - * Tarifario MYFRIENDS (Prima 2)    |\n"); 
        printf("| 3 - * Tarifario MYJOB (Prima 3)        |\n");
        printf("------------------------------------------\n");
        printf("Escolha o seu tarifario: ");
        scanf("%d", &tarifario);

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
        printf("Minutos para a mesma rede: ");
        scanf("%d", &minMesmaRede);
        printf("Minutos para a outras redes: ");
        scanf("%d", &minOutrasRedes);
        printf("Minutos para a rede fixa nacional: ");
        scanf("%d", &minRedeFixaN);
        precoTotal = (minMesmaRede * mesmaRede) + (minOutrasRedes * outrasRedes) + (minRedeFixaN * redeFixaN);
        printf("Total a pagar : %.2f Euros", precoTotal);
    } else {
        printf("\n");
        printf("----- PLANO PERSONALISAVEL DE PRECOS -----\n");
        printf("------------------------------------------\n");
        printf("| 1 - * Tarifario BASE (Prima 1):        |\n");
        printf("| 2 - * Tarifario SUPER (Prima 2):       |\n"); 
        printf("| 3 - * Tarifario EXECUTIVE (Prima 3):   |\n");
        printf("------------------------------------------\n");
        printf("Escolha o seu tarifario: ");
        scanf("%d", &tarifario);
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
            printf("Minutos para a mesma rede: ");
            scanf("%d", &minMesmaRede);
            printf("Minutos para a outras redes: ");
            scanf("%d", &minOutrasRedes);
            printf("Minutos para a rede fixa nacional: ");
            scanf("%d", &minRedeFixaN);
            precoTotal = (minMesmaRede * mesmaRede) + (minOutrasRedes * outrasRedes) + (minRedeFixaN * redeFixaN) + assinatura;
            printf("Total a pagar : %.2f Euros", precoTotal);
    }
    return 0;
}