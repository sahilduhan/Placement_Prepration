#include <bits/stdc++.h>
using namespace std;

bool bipartitrDFS(int src, vector<int>adjList [], int color []){
    if (color[src] == -1) color[src] = 1;

    for (auto it : adjList[src]){
        if (color[it] == -1){
            color[it] = 1 - color[src];
            if (!bipartitrDFS(it, adjList, color)) return false;
        }
        else if (color[it] == color[src]) return false;
    }
    return true;
}
bool isBipartite(vector<int>adjList [], int n){
    int color[n];
    memset(color, -1, sizeof color);
    for (int i = 0; i < n; i++){
        if (color[i] == -1){
            if (!bipartitrDFS(i, adjList, color)) return false;
        }
    }
    return true;
}
int main(){

    return 0;
}