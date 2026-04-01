#include <stdio.h>
int main() {
   int n, i;
   printf("Ingrese la cantidad de elementos (n): ");
   scanf("%d", &n);
   int A[n];
   
   for (i = 0; i < n; i++) {
       printf("Ingrese el elemento [%d]: ", i + 1);
       scanf("%d", &A[i]);
   }
   printf("\nLos elementos del vector son:\n");
   
   for (i = 0; i < n; i++) {
       printf("%d ", A[i]);
   }
   printf("\n");
   return 0;
}
