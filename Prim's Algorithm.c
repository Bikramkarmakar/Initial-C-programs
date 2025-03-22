#include <stdio.h>
#include <limits.h>
#define MAX 100

int minKey(int key[], int mstSet[], int n)
{
    int min = INT_MAX, min_index;
    for (int v = 0; v < n; v++)
        if (mstSet[v] == 0 && key[v] < min)
            min = key[v], min_index = v;
    return min_index;
}

void printMST(int parent[], int graph[MAX][MAX], int n)
{
    int min_cost = 0;
    printf("The edges will be taken in MST:\n");
    for (int i = 1; i < n; i++) {
        printf("edge %d:(%d-%d) cost:%d\n", i, parent[i] + 1, i + 1, graph[i][parent[i]]);
        min_cost += graph[i][parent[i]];
    }
    printf("Minimum spanning tree matrix is:\n");
    int mst[MAX][MAX] = {0};
    for (int i = 1; i < n; i++) {
        mst[i][parent[i]] = graph[i][parent[i]];
        mst[parent[i]][i] = graph[i][parent[i]];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mst[i][j]);
        printf("\n");
    }
    printf("Minimum cost=(%d)\n", min_cost);
}

void primMST(int graph[MAX][MAX], int n) {
    int parent[MAX];
    int key[MAX];
    int mstSet[MAX];
    for (int i = 0; i < n; i++)
        key[i] = INT_MAX, mstSet[i] = 0;
    key[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < n - 1; count++) {
        int u = minKey(key, mstSet, n);
        mstSet[u] = 1;
        for (int v = 0; v < n; v++)
            if (graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }
    printMST(parent, graph, n);
}

int main() {
    int n, graph[MAX][MAX];
    printf("Enter the no of nodes:");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    primMST(graph, n);
    return 0;
}

