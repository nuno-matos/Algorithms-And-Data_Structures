#include <stdio.h>
int main(){
    int n = 0, i = 0, j = 0;
    while (n < 2){
        printf("Qual a dimesao do quadrado: ");
        scanf("%d", &n);
        if (n < 2){
            printf("Warning: Nao existem quadrados com essas dimensoes\n");
        }
    }
    for(i = 0; i < n; i++){
        printf("%d\t", i + 1);
        for(j = 0; j < n - 1; j++){
            printf("%d\t", (j + i) + 2);
        }
        printf("\n");
    }
    return 0;
}