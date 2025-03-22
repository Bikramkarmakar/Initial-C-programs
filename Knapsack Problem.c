#include <stdio.h>

struct Item {
    int profit, weight;
    float ratio;
};

void sortItems(struct Item items[], int n) {
    struct Item temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (items[j].ratio < items[j + 1].ratio) {
                temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }
}

void fractionalKnapsack(struct Item items[], int n, int capacity) {
    float totalProfit = 0.0;
    int i;

    for (i = 0; i < n; i++) {
        if (items[i].weight <= capacity) {
            totalProfit += items[i].profit;
            capacity -= items[i].weight;
        } else {
            totalProfit += items[i].profit * ((float)capacity / items[i].weight);
            break;
        }
    }
    printf("The solution of the problem will be: %.3f\n", totalProfit);
}

int main() {
    int n, capacity;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    struct Item items[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the profit and weight of %d%s element: ", i + 1, (i + 1 == 1) ? "st" : (i + 1 == 2) ? "nd" : (i + 1 == 3) ? "rd" : "th");
        scanf("%d %d", &items[i].profit, &items[i].weight);
        items[i].ratio = (float)items[i].profit / items[i].weight;
    }

    printf("\nItems details:\n");
    printf("Item\tProfit\tWeight\tProfit/Weight Ratio\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%.2f\n", i + 1, items[i].profit, items[i].weight, items[i].ratio);
    }

    printf("\nProfit/Weight ratios of the items are: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", items[i].ratio);
    }
    printf("\n");

    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);

    sortItems(items, n);
    fractionalKnapsack(items, n, capacity);

    return 0;
}
