#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, e;
    cin >> n >> e;

    vector<int>adjList[n + 1];

    for (int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;

        adjList[u].push_back(v);
        adjList[v].push_back(u);

    }

    vector<bool> vis(e + 1, 0);
    queue<int>q;
    q.push(1);
    q.pop();

    while (!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << endl;
        for (auto it : adjList[node]){
            if (!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    return 0;
}