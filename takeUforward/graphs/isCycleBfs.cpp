#include <bits/stdc++.h>
using namespace std;

bool checkCycle(int s, int v, vector<int>adjList [], vector<int>& visited) {
    queue<pair<int, int>>q;
    visited[s] = true;
    q.push({s, -1});

    while (!q.empty()){
        int node = q.front().first;
        int par = q.front().second;

        q.pop();

        for (auto it : adjList[node]){
            if (!visited[it]){
                visited[it] = true;
                q.push({it, node});
            }
            else if (par != it){
                return true;
            }
        }
    }
    return false;
}
bool isCycle(int v, vector<int>adjList []){
    vector<int>visited(v + 1, 0);
    for (int i = 0; i < v;i++){
        if (!visited[i]){
            if (checkCycle(i, v, adjList, visited)) return true;
        }
    }
    return false;

}
int main(){




    return 0;
}