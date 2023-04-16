#include <stdio.h>
#include <math.h>

// function to check whether a number is an Armstrong number
int is_armstrong(int num) {
    int original_num = num;
    int sum = 0;
    int num_digits = (int) log10(num) + 1;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, num_digits);
        num /= 10;
    }

    if (sum == original_num) {
        return 1;
    } else {
        return 0;
    }
}

// function to print all Armstrong numbers between two intervals
void print_armstrong(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (is_armstrong(i)) {
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

    printf("Armstrong numbers between %d and %d are: ", start, end);
    print_armstrong(start, end);

    return 0;
}
