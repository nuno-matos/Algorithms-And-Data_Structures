#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 0, i = 0;
    int* ptr;
    printf("Qual o tamanho da sequencia: \n");
    scanf("%d", &n);
    ptr = (int*) malloc (n * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 1;
    for (i = 0; i < n; i++) {
        ptr[2 + i] = ptr[0 + i] + ptr[1 + i];    
    }
    printf("Sequencia de Fibonacci:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", ptr[i]);
    }
    return 0;
}