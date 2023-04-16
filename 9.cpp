#include <stdio.h>

// function to check whether a number is a perfect number
int is_perfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

// function to print all perfect numbers between two intervals
void print_perfect(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (is_perfect(i)) {
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

    printf("Perfect numbers between %d and %d are: ", start, end);
    print_perfect(start, end);

    return 0;
}
