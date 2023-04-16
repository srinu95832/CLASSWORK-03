#include <stdio.h>

// function to check whether a number is even or odd
int is_even(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_even(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
