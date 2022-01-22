#include<bits/stdc++.h>
using namespace std;

bool checkCycle(int node, vector<int>adjList [], int visited [], int dfsvisited []){
    visited[node] = 1;
    dfsvisited[node] = 1;

    for (auto it : adjList[node]){
        if (!visited[it]){
            if (checkCycle(it, adjList, visited, dfsvisited)) return true;
        }
        else if (dfsvisited[it]) return true;
    }
    return false;
}

bool isCycle(vector<int>adjList [], int n){
    int dfsvisited[n], visited[n];
    memset(visited, 0, sizeof visited);
    memset(dfsvisited, 0, sizeof dfsvisited);

    for (int i = 0; i < n;++i){
        if (!visited[i]){
            if (checkCycle(i, adjList, visited, dfsvisited)) return true;
        }
    }
    return false;
}
int main(){

    return 0;
}