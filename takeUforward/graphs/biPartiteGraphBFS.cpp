#include <bits/stdc++.h>
using namespace std;
bool BFSbipartite(int src, vector<int>adjList [], int color []){

    queue<int>q;
    q.push(src);
    color[src] = 1;
    while (!q.empty()){
        int node = q.front();
        q.pop();

        for (auto it : adjList[node]){
            if (color[it] == -1){
                color[it] = 1 - color[node];
                q.push(it);
            }
            else if (color[it] == color[node]) return false;
        }
    }
    return true;
}

bool isBaipartite(vector<int>adjList [], int n){
    int color[n];
    memset(color, -1, sizeof color);
    for (int i = 0; i < n; i++){
        if (color[i] == -1){
            if (!BFSbipartite(i, adjList, color)) return false;
        }
    }
    return true;
}
int main(){

    return 0;
}