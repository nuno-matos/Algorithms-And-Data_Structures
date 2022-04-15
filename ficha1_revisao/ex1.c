#include <stdio.h>

int main(){
	int n = 0;
	printf("Introduza um numero: ");
	scanf("%d", &n);
	if(n % 2 == 0){
		printf("Numero Par");
	} else {
		printf("Numero Impar");
	}
	return 0;
}
