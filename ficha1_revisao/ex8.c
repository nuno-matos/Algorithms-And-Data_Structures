#include <stdio.h>
int main(){
    int n = 0, i = 0, num = 0, media = 0, soma = 0;
    while(n < 2){
        printf("Quantos numeros pretende introduzir: \n");
        scanf("%d", &n);
        if (n < 2){
            printf("#ERRO#\nSao necessarios pelo menos 2 numeros para determinar a media\n");
        }
    }
    for(i; i < n; i++){
        printf("Introduza um numero: \n");
        scanf("%d", &num);
        soma = soma + num;
    }
    //media = a soma total / n
    media = soma / n;
    printf("media = %d", media); 
    return 0;
}