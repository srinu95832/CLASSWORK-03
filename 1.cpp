#include <stdio.h>

// function to find cube of a number
int cube(int num) {
    return num * num * num;
}

int main() {
    int num, c;
    printf("Enter a number: ");
    scanf("%d", &num);

    // calling cube function to find the cube of the number
    c = cube(num);

    printf("Cube of %d is %d\n", num, c);
    return 0;
}
