#include <stdio.h>

// function to print all natural numbers between 1 to n using recursion
void printNaturalNumbers(int n) {
    if (n == 0) {
        return;
    } else {
        printNaturalNumbers(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("All natural numbers between 1 and %d are: ", n);
    printNaturalNumbers(n);

    return 0;
}
