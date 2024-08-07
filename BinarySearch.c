#include <stdio.h>

void main() {
    int n, i, searchElement, index;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array in ascending order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
      
    }

    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);


    int left = 0;
    int right = n - 1;
    index = -1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == searchElement) {
            index = mid;
            break;
        } else if (arr[mid] < searchElement) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("NAME: Tejas Patel\nROLL NO.: 23TBCP513D\n");

    if(index != -1) {
        printf("Element %d found at index %d.\n", searchElement, index);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }
}
