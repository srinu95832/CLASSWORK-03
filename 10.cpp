#include <stdio.h>

// function to calculate power of a number using recursion
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    printf("Enter the base number: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%d raised to the power of %d is: %d", base, exponent, power(base, exponent));

    return 0;
}
