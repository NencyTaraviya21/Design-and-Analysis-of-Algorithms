#include <stdio.h>
#include <limits.h>

#define v 5

int main() {
    int graph[v][v] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    int parent[v]; 
    int key[v];    
    int mstSet[v]; 

    for (int i = 0; i < v; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
    }

    key[0] = 0;    
    parent[0] = -1; // First node is always root of MST

    for (int count = 0; count < v - 1; count++) {
        int minKey = INT_MAX;
        int minIndex = -1;

        // Find the vertex with the minimum key value
        for (int j = 0; j < v; j++) {
            if (!mstSet[j] && key[j] < minKey) {
                minKey = key[j];
                minIndex = j;
            }
        }

        mstSet[minIndex] = 1; // Add the picked vertex to the MST

        // Update key values and parent index of the adjacent vertices
        for (int j = 0; j < v; j++) {
            if (graph[minIndex][j] && !mstSet[j] && graph[minIndex][j] < key[j]) {
                parent[j] = minIndex;
                key[j] = graph[minIndex][j];
            }
        }
    }

    // Print the constructed MST
    printf("Edge \tWeight\n");
    for (int i = 1; i < v; i++) {
        printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
    }

    return 0;
}