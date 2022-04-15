#include <stdio.h>
int main(){
    int n = 0, i;
    while(n <= 0 || n > 10){
        printf("Insira o numero da tabuada (1 - 10) que pretende: \n");
        scanf("%d", &n);
        if (n <= 0 || n > 10)
        printf("Warning: A tabuada e so de 1 a 10\n");
    } 
    for(i = 1; i < 11; i++){
        printf("%d\tx\t%d\t =\t %d\n", n, i, n * i);
    }
    return 0;
}