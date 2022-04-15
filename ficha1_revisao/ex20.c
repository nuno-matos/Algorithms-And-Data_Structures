#include <stdio.h>
int main(){
    int i, j, k, l, n = 6;
    for (i = 1; i <= n; i++) {
      for (j = 1; j <= n - i; j++) {
          printf(" ");
          printf("\t");
      }
      for (k = 1; k <= i; k++) {
          printf("%d\t", k);
      }
      for (l = i - 1; l >= 1; l--) {
          printf("%d\t", l);
      }  
        printf("\n");
    }
    return 0;
}