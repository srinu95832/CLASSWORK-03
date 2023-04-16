#include <stdio.h>

int reverse(int num) {
   if (num == 0) {
      return 0;
   } else {
      return ((num % 10) * pow(10, floor(log10(num)))) + reverse(num/10);
   }
}

int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);
   printf("Reverse of %d is %d\n", num, reverse(num));
   return 0;
}
