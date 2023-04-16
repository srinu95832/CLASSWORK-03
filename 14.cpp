#include <stdio.h>

int sumEven(int n) {
   if (n == 0) {
      return 0;
   } else if (n % 2 == 0) {
      return n + sumEven(n-2);
   } else {
      return sumEven(n-1);
   }
}

int sumOdd(int n) {
   if (n == 0) {
      return 0;
   } else if (n % 2 == 1) {
      return n + sumOdd(n-2);
   } else {
      return sumOdd(n-1);
   }
}

int main() {
   int n;
   printf("Enter a positive integer: ");
   scanf("%d", &n);
   printf("Sum of even numbers = %d\n", sumEven(n));
   printf("Sum of odd numbers = %d\n", sumOdd(n));
   return 0;
}
