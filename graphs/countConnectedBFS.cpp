#include<bits/stdc++.h>
using namespace std;

void bfs(int row, int col, vector<vector<int>>& grid, vector<vector<bool>>& vis){
    vis[row][col] = true;
    queue<pair<int, int>>q;
    q.push({row, col});

    while (!q.empty()){
        int r = q.front().first;
        int c = q.front().second;

        // iterate over the neighbours


    }
}
int main(){
    int n, e;
    cin >> n >> e;
    vector<int>adj[n];
    for (int i = 0;i < e;i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    // cout << numOfProvinces(adj, n, e) << endl;
    return 0;
}