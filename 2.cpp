#include <stdio.h>

#define PI 3.14159

// function to find diameter of a circle
float diameter(float radius) {
    return 2 * radius;
}

// function to find circumference of a circle
float circumference(float radius) {
    return 2 * PI * radius;
}

// function to find area of a circle
float area(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius, d, c, a;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // calling functions to find diameter, circumference, and area
    d = diameter(radius);
    c = circumference(radius);
    a = area(radius);

    printf("Diameter of circle is %.2f\n", d);
    printf("Circumference of circle is %.2f\n", c);
    printf("Area of circle is %.2f\n", a);
    return 0;
}
