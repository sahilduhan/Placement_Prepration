#include<bits/stdc++.h>
using namespace std;
bool solve(int node, vector<int>adj [], vector<int>& color){
    queue<int>q;
    q.push(node);
    color[node] = 0;

    while (!q.empty()){
        int curr = q.front();
        q.pop();

        for (auto it : adj[curr]){
            if (color[it] == -1){
                color[it] = !color[curr];
                q.push(it);
            }
            else if (color[it] == color[curr]) return false;
        }
    }
    return true;
}

bool isBipartite(int n, vector<int>adj []){
    vector<int>color(n, -1);
    for (int i = 0;i < n;i++){
        if (color[i] == -1){
            if (!solve(i, adj, color)) return false;
        }
    }
    return true;
}
int main(){



    return 0;
}