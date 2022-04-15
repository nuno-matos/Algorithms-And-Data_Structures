#include <stdio.h>
int main(){
    int n1 = 0, n2 = 0, produto = 0;
    while (n2 <= n1){
        printf("Introduza o primeiro numero: \n");
        scanf("%d", &n1);
        printf("Introduza o segundo numero: \n");
        scanf("%d", &n2);
        if(n2 <= n1){
            printf("#ERRO#\n! O Segundo numero tem de ser maior que o Primeiro !\n");
        }
    }
    produto = n1 * n2;
    printf("%d x %d = %d", n1, n2, produto);
    return 0;
}