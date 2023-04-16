#include <stdio.h>

// function to print all even or odd numbers between 1 to n using recursion
void printEvenOrOdd(int n, int isEven) {
    if (n == 0) {
        return;
    } else {
        if (isEven) {
            if (n % 2 == 0) {
                printf("%d ", n);
            }
        } else {
            if (n % 2 != 0) {
                printf("%d ", n);
            }
        }
        printEvenOrOdd(n - 1, isEven);
    }
}

int main() {
    int n, isEven;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter 1 to print even numbers or 0 to print odd numbers: ");
    scanf("%d", &isEven);

    if (isEven == 1) {
        printf("All even numbers between 1 and %d are: ", n);
        printEvenOrOdd(n, 1);
    } else {
        printf("All odd numbers between 1 and %d are: ", n);
        printEvenOrOdd(n, 0);
    }

    return 0;
}
