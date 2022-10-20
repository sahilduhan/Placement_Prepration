#include<bits/stdc++.h>
using namespace std;
void adjacencyMatrix(int nodes, int edges){
    vector<vector<int>>graph(nodes, vector<int>(nodes, 0));

    for (int i = 0;i < edges;i++){
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    for (int i = 0;i < nodes;i++){
        cout << i << "-->";
        for (int j = 0;j < graph[i].size();j++) cout << graph[i][j] << ' ';
        cout << endl;
    }
}
int main(){



    return 0;
}