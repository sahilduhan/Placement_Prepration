#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
bool vis[N];
vector<int> adjList[N];

void dfs(int node){
    vis[node] = 1;
    cout << node << endl;

    for (auto it : adjList[node]){
        if (vis[it]);
        else {
            dfs(it);
        }
    }
}
int main(){

    int n, v;
    cin >> n >> v;

    for (int i = 0; i < n; i++) vis[i] = false;

    int x, y;
    for (int i = 0; i < v;i++){
        cin >> x >> y;
        adjList[x].push_back(v);
        adjList[y].push_back(x);
    }
    dfs(1);
    return 0;
}