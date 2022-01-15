#include <bits/stdc++.h>
using namespace std;
bool checkCycle(int s, int v, vector<int>adjList [], vector<int>& visited){

    return false;
}

bool isCycle(int v, vector<int> adjList []){
    vector<int>visited(v + 1, 0);

    for (int i = 0; i < v; i++){
        if (!visited[i]){
            if (checkCycle(i, v, adjList, visited)) return true;
        }
    }
    return false;
}
int main(){

    return 0;
}