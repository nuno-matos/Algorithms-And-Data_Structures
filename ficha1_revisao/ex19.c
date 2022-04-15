#include <stdio.h>
int main(){
    int i, j, k = -1, l = 0, a = 0, b = 0, starCount = 0, spaceCount = 0, center = 0;
        //altura impar min = 3
        while (b %  2 == 0 || b < 3) {
            printf("Introduza a base da arvore: ");
            scanf("%d", &b);
            if (b % 2 == 0 || b < 3) {
                printf("#ERRO#\nValores Invalidos\n");
            }
        }
        //largura impar min = 1 nao pode ser maior que a metade da base
        while (l < 1 || l % 2 == 0 || l > b/2) {
            printf("Introduza a largura do tronco da arvore: ");
            scanf("%d", &l);
            if (l < 1 || l % 2 == 0 || l > b/2) {
                printf("#ERRO#\nValores Invalidos\n");
            }
        }
        //altura min = 2 nao pode ser maior que a metade da base
        while (a < 2 || a > b/2) {
            printf("Introduza a altura do tronco da arvore: ");
            scanf("%d", &a);
            if (a < 2 || a > b/2) {
                printf("#ERRO#\nValores Invalidos\n");
            }
        }
    // ###################Topo da arvore##################################
    for(i = 1; i < b - k; i++){
        // Numero de Estrelas
        starCount = (2 * i) - 1;
        // Numero de Espacos
        spaceCount = b - i + 1;  
        for(j = 0; j < spaceCount; j++){
            printf(" ");
        }
        for(j = 0; j < starCount; j++){
            printf("*");
        }
        printf("\n");
        k++;
    }
    // para centrar o tronco com arvore - x posicoes
    center = l / 2; 
    // ########################Tronco##############################
    for(i = 0; i < a; i++){
        for(j = 0; j < b - center; j++){
            printf(" "); 
        }
        for(j = 0; j < l; j++){ 
            printf("*");
        }
        printf("\n");
    }  
    return 0;
}