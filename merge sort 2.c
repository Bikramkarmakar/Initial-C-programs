#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right, int order) {
    int n1 = mid - left + 1, n2 = right - mid;
    int *L = malloc(n1 * sizeof(int)), *R = malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) arr[k++] = (order == 1 ? L[i] <= R[j] : L[i] >= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    free(L), free(R);
}

void mergesort(int arr[], int left, int right, int order) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergesort(arr, left, mid, order);
        mergesort(arr, mid + 1, right, order);
        merge(arr, left, mid, right, order);
    }
}

int main() {
    int n, order;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Choose sorting order (1: Ascending, 2: Descending): ");
    scanf("%d", &order);
    if (order != 1 && order != 2) order = 1;

    mergesort(arr, 0, n - 1, order);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    free(arr);
    return 0;
}

