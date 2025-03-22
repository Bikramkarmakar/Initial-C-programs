#include <stdio.h>
#include <stdlib.h>

// Merge function to combine two sorted halves
void merge(int arr[], int left, int mid, int right, int order) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if ((order == 1 && L[i] <= R[j]) || (order == 2 && L[i] >= R[j])) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

// Merge sort function
void mergesort(int arr[], int left, int right, int order) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergesort(arr, left, mid, order);
        mergesort(arr, mid + 1, right, order);
        merge(arr, left, mid, right, order);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d   ", arr[i]);
    printf("\n");
}

int main() {
    int n, order;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Choose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &order);

    if (order != 1 && order != 2) {
        printf("Invalid choice! Defaulting to ascending order.\n");
        order = 1;
    }

    mergesort(arr, 0, n - 1, order);

    printf("Sorted array: ");
    printArray(arr, n);

    free(arr);
    return 0;
}
