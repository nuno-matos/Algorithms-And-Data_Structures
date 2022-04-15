#include <stdio.h>
#include <limits.h>
int main(){
    // The minimum value of INT -> INT_MIN = -2147483648
    // The maximum value of INT -> INT_MAX = 2147483647
    int n = 0, i = 0, num = 0, maior = INT_MIN, menor = INT_MAX;
    while(n < 2){
        printf("Quantos numeros pretende introduzir: \n");
        scanf("%d", &n);
        if(n < 2)
        printf("#ERRO#\n! Sao necessarios pelo menos 2 numeros para termos uma sequencia valida!\n");
    }
    for (i; i < n; i++){
        printf("Introduza um numero: \n");
        scanf("%d", &num);      
        if (num > maior)
            maior = num;
        if (num < menor)
            menor = num;    
    }
    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
    return 0;
}