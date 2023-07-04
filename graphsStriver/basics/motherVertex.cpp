#include<bits/stdc++.h>
using namespace std;
void dfs(int src, vector<int>vec [], vector<int>& visited, int& count){
    visited[src] = true;
    for (auto e : vec[src]){
        if (!visited[e]){
            count++;
            dfs(e, vec, visited, count);
        }
    }
}
int findMotherVertex(int n, vector<int>adj []){
    for (int i = 0;i < n;i++){
        int count = 0;
        vector<int>visited(n, false);
        dfs(i, adj, visited, count);
        if (count + 1 == n) return i;
    }
    return -1;
}
int main(){


    return 0;
}