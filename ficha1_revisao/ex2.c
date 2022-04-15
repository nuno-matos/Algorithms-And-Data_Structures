#include <stdio.h>
int main(){
    float A = 0.0, B = 0.0, C = 0.0;
    printf("Qual o valor de A: \n");
    scanf("%f", &A);
    printf("Qual o valor de B: \n");
    scanf("%f", &B);  
    printf("Qual o valor de C: \n");
    scanf("%f", &C);
    if (A == 0.1f && B == 0.5f && C == 0.6f)
    {
        printf("Produto 1");
    } else if (A == 0.1f && B == 0.3f && C == 0.6f){
        printf("Produto 2");
    } else if (A == 0.2f && B == 0.5f && C == 0.7f){
        printf("Produto 3");    
    } else if (A == 0.2f && B == 0.3f && C == 0.1f){
        printf("Produto 4");
    } else if (A == 0.2f && B == 0.5f && C == 0.6f){
        printf("Produto 5");
    } else {
        printf("Produto Desconhecido");
    }
    return 0;
}