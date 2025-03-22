#include <stdio.h>
#include <limits.h>
#include <string.h>

#define MAX 100

int dp[MAX][MAX];
int bracket[MAX][MAX];

int costValues[MAX][MAX];




void printMultiplicationTable(int n) {
    printf("\nMultiplication Cost Table:\n");
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
          if(i>j){
            continue;
          }else{
            printf("the cost of %d,%d : ",i,j);
                printf("%4d \n", dp[i][j]);
        }}
        printf("\n");
    }
}

int matrixChainOrder(int p[], int n) {
    for (int i = 1; i < n; i++)
        dp[i][i] = 0;

    for (int len = 2; len < n; len++) {
        for (int i = 1; i < n - len + 1; i++) {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (cost < dp[i][j]) {
                    dp[i][j] = cost;
                    bracket[i][j] = k;
                }
                costValues[i][j] = cost;
            }
        }
    }
    return dp[1][n - 1];
}

int main() {
    int n;
    printf("Enter the number of matrices: ");
    scanf("%d", &n);

    int p[n + 1];
    printf("Enter the dimensions of matrices:\n");

    for (int i = 0; i < n; i++) {
        int row, col;
        printf("Matrix %c: ", 'A' + i);
        scanf("%d%d", &row, &col);
        p[i] = row;
        if (i == n - 1)
            p[i + 1] = col;
    }

    printf("The dimensions are given as: ");
    for (int i = 0; i <= n; i++)
        printf("%d%s", p[i], (i < n) ? "," : "\n");

    int minMultiplications = matrixChainOrder(p, n + 1);

    printf("Minimum number of multiplications will be: %d\n", minMultiplications);

    char name = 'A';


    printMultiplicationTable(n + 1);

    return 0;
}
