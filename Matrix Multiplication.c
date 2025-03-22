#include <stdio.h>
#include <limits.h>
#include <string.h>

#define MAX 100

int dp[MAX][MAX];
int split[MAX][MAX];
char name = 'A';

// Function to print the optimal parenthesization
void printOptimalParenthesis(int i, int j, char *result)
{
    if (i == j)
    {
        char matrixName[2] = {name++, '\0'};
        strcat(result, matrixName);
        return;
    }
    strcat(result, "(");
    printOptimalParenthesis(i, split[i][j], result);
    printOptimalParenthesis(split[i][j] + 1, j, result);
    strcat(result, ")");
}

// Function to find the minimum cost of multiplying matrices
int matrixChainMultiplication(int p[], int n) {
    int i, j, k, len;
    for (i = 1; i < n; i++) {
        dp[i][i] = 0;
    }
    for (len = 2; len < n; len++) {
        for (i = 1; i <= n - len; i++) {
            j = i + len - 1;
            dp[i][j] = INT_MAX;
            for (k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (cost < dp[i][j]) {
                    dp[i][j] = cost;
                    split[i][j] = k;
                }
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
        scanf("%d %d", &row, &col);
        p[i] = row;
        if (i == n - 1) p[i + 1] = col;
    }

    printf("The dimensions are given as: ");
    for (int i = 0; i <= n; i++) {
        printf("%d", p[i]);
        if (i < n) printf(", ");
    }
    printf("\n");

    int minMultiplications = matrixChainMultiplication(p, n + 1);

    char result[200] = "";
    name = 'A';
    printOptimalParenthesis(1, n, result);

    printf("Multiplication sequence is: %s\n", result);
    printf("Minimum no of multiplication will be: %d\n", minMultiplications);

    return 0;
}
