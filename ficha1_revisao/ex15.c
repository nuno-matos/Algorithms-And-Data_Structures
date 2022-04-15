#include <stdio.h>
int main() {
    int num = 0, i;
        while(num < 1) {
            printf("Introduza um numero: \n");
            scanf("%d", &num);
            if (num < 1 && num != 0 && num != 1)
            printf("#ERRO# : Nao sao admitidos numeros negativos\n");
            if (num == 0) {
                printf("O numero 0 nao e numero primo\n");
                return 1;
            }
            if (num == 1) {
                printf("O numero 1 nao e numero primo\n");
                return 1;       
            }
        }
        for(i = 2; i < num; i++) {
            if (num % i == 0) {
            printf("O numero %d nao e numero primo", num);
            return 1;
            }
        }
    printf("O numero %d e numero primo", num);
    return 0;
}