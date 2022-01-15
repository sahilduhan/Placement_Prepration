#include <bits/stdc++.h>
using namespace std;
bool checkCycle(int s, int par, vector<int>adjList [], vector<int>& visited){
    visited[s] = 1;
    for (auto it : adjList[s]){
        if (!visited[it] == 0){
            if (checkCycle(it, s, adjList, visited)) return true;
        }
        else if (it != par) return true;
    }
    return false;
}

bool isCycle(int v, vector<int> adjList []){
    vector<int>visited(v + 1, 0);

    for (int i = 0; i < v; i++){
        if (!visited[i]){
            if (checkCycle(i, -1, adjList, visited)) return true;
        }
    }
    return false;
}
int main(){

    return 0;
}