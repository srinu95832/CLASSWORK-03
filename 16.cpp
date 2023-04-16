#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num, int reverseNum) {
   if (num == 0) {
      return (num == reverseNum);
   } else {
      return isPalindrome(num/10, reverseNum*10 + num%10);
   }
}

int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);
   if (isPalindrome(num, 0)) {
      printf("%d is a palindrome number.\n", num);
   } else {
      printf("%d is not a palindrome number.\n", num);
   }
   return 0;
}
