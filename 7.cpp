#include <stdio.h>

// function to find the factorial of a number
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// function to check whether a number is strong
int is_strong(int num) {
    int original_num = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    if (sum == original_num) {
        return 1;
    } else {
        return 0;
    }
}

// function to print all strong numbers between two intervals
void print_strong(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (is_strong(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Strong numbers between %d and %d are: ", start, end);
    print_strong(start, end);

    return 0;
}
