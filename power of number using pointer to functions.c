#include <stdio.h>
int power(int base, int pwr) {
   int result = 1;
   for (int i = 0; i<pwr;i++) {
       result*= base;
   }
   return result;
}
int main() {
   int base, pwr, result;
   printf("Enter the base value: ");
   scanf("%d", &base);

   printf("Enter the power value: ");
   scanf("%d", &pwr);

   int (*ptr)(int,int) = power;
   result = ptr(base,pwr);

   printf("%d raised to the power of %d is %d\n",base,pwr,result);

   return 0;
}
