#include <stdio.h>

// function to find maximum of two numbers
int max(int a, int b) {
    return a > b ? a : b;
}

// function to find minimum of two numbers
int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int num, max_num, min_num;
    printf("Enter number of values: ");
    scanf("%d", &num);

    // initialize max_num and min_num to the first value
    int value;
    scanf("%d", &value);
    max_num = value;
    min_num = value;

    // loop through the remaining values to find maximum and minimum
    for (int i = 1; i < num; i++) {
        scanf("%d", &value);
        max_num = max(max_num, value);
        min_num = min(min_num, value);
    }

    printf("Maximum of the numbers is %d\n", max_num);
    printf("Minimum of the numbers is %d\n", min_num);
    return 0;
}
