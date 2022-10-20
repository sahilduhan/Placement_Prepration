#include<bits/stdc++.h>
using namespace std;
void adjacencyList(int nodes, int edges){
    vector<int>graph[nodes + 1];
    for (int j = 0;j < edges;j++){
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 1;i <= nodes;i++){
        cout << i << "-->";
        for (int j = 0;j < graph[i].size();j++) cout << graph[i][j] << " ";
        cout << endl;
    }
}
int main(){
    adjacencyList(6, 5);

    return 0;
}