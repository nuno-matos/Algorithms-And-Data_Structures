#include <stdio.h>
int main(){
    int n = 0, soma = 0, media = 0, num = 1;
    while (num != 0){
        printf("Introduza um numero: \n");
        scanf("%d", &num);
        soma = soma + num;   
        n++;
        if(n <= 2 && num == 0){
            printf("#ERRO#\nSao Necessarios pelo menos 2 numeros para determinar a media\n");
            // return to the while cycle
            num = 1;
            // recycle vars values
            n = 0;
            soma = 0;
        }
    }
    media = soma / (n - 1);
    printf("Media = %d", media);   
    return 0;
}