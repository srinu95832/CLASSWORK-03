#include <stdio.h>

int main() {
    int arr1[50], arr2[50], n, i;
    int *ptr1 = arr1, *ptr2 = arr2;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr1 + i);
    }
    for (i = 0; i < n; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }
    printf("Elements of the first array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr1 + i));
    }
    printf("\nElements of the second array (copied from the first array):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr2 + i));
    }
    return 0;
}
