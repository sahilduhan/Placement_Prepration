#include <bits/stdc++.h>
using namespace std;

// Node = n
// edges = v

int main(){


    // here n is the number of edges/nodes and v is the number of vertices

    int n, e;
    cin >> n >> e;

    int adjMatrix[n + 1][n + 1];

    for (int i = 0; i < e; i++){

        int u, v;
        cin >> u >> v;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }


    return 0;
}