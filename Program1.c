#include <stdio.h>

void main()
{
    int n, i;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    int second_max = min;
    int second_min = max;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > second_max && arr[i] < max)
        {
            second_max = arr[i];
        }
        if (arr[i] < second_min && arr[i] > min)
        {
            second_min = arr[i];
        }
    }
    printf("NAME: Tejas Patel\nROLL NO.: 23TBCP513D \n");

    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    if (second_max == min || second_min == max)
    {
        printf("Array does not have distinct second largest or second smallest elements.\n");
    }
    else
    {
        printf("Second largest element: %d\n", second_max);
        printf("Second smallest element: %d\n", second_min);
    }
}
