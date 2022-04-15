#include <stdio.h>
#include <limits.h>
int main(){
    // The minimum value of INT -> INT_MIN = -2147483648
    // The maximum value of INT -> INT_MAX = 2147483647
    int n = 0, num = INT_MIN, maior = INT_MIN, menor = INT_MAX;
    while (num != 0){
        printf("Introduza um numero: \n");
        scanf("%d", &num);
        n++;
        if(n <= 2 && num == 0) {
            printf("#ERRO#\n! Sao necessarios pelo menos 2 numeros para termos uma sequencia valida !\n");
            // Return into the cycle
            num = INT_MIN;
            // Restart variables
            n = 0;
            menor = INT_MAX;
            maior = INT_MIN;
        } else {
            if (num > maior && num != 0)
                maior = num;
            if (num < menor && num != 0)
                menor = num;    
        }
    }
    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
    return 0;
}