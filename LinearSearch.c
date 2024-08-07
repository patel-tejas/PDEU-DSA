#include <stdio.h>

void main() {
    int n, i, searchElement, found = 0;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            break;
        }
    }

    printf("NAME: Tejas Patel\nROLL NO.: 23TBCP513D\n");

    if (found) {
        printf("Element %d found at index %d.\n", searchElement, i);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }
}
