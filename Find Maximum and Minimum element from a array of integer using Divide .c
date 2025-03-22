#include <stdio.h>

// Function to find the maximum and minimum using Divide and Conquer
void findMinMax(int arr[], int low, int high, int* min, int* max) {
    if (low == high) {
        // If there's only one element
        *min = *max = arr[low];
    }
    else if (high == low + 1) {
        // If there are two elements
        if (arr[low] > arr[high]) {
            *max = arr[low];
            *min = arr[high];
        } else {
            *min = arr[low];
            *max = arr[high];
        }
    } else {
        // More than two elements, divide the array
        int mid = (low + high) / 2;
        int leftMin, leftMax, rightMin, rightMax;

        // Recur for left and right halves
        findMinMax(arr, low, mid, &leftMin, &leftMax);
        findMinMax(arr, mid + 1, high, &rightMin, &rightMax);

        // Combine the results
        *min = (leftMin < rightMin) ? leftMin : rightMin;
        *max = (leftMax > rightMax) ? leftMax : rightMax;
    }
}

int main() {
    int n;

    // Take user input for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Take user input for array elements
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Variables to hold minimum and maximum values
    int min, max;

    // Find the minimum and maximum using divide and conquer
    findMinMax(arr, 0, n - 1, &min, &max);

    // Print the result
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
