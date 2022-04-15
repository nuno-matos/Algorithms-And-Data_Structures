#include <stdio.h>
int main(){
    // size = 0 to 65,535 or 0 to 4,294,967,295
    unsigned int num = 0, fatorial = 0; 
    int i = 1;
    printf("Insira um numero: \n");
    scanf("%d", &num);
    // Se o fatorial for 0 ou 1 o seu resultado e = a 1
    if (num == 0 || num == 1){
        fatorial = 1;
        printf("Fatorial(%d) = %d", num, fatorial);     
    } else {
        /* Guarda o primeiro resultado da multiplicacao
        * Para depois fazer o resto das multiplicacoes dentro do ciclo for
        */ 
        fatorial = num * (num - i);
        i++;  
        for(i; i < num; i++){      
            fatorial = fatorial * (num - i);   
        }
        printf("Fatorial(%d) = %d", num, fatorial);
    }
    return 0;
}