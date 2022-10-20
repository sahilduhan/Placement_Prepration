#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>& v, int node, int parent, vector<int>& vis, vector<int>& low, vector<int>& disc, int& timer, int& cnt){
    vis[node] = 1;
    low[node] = timer;
    disc[node] = timer++;
    for (auto it : v[node]){
        if (it == parent) continue;
        if (vis[it]) low[node] = min(low[node], low[it]);
        else{
            dfs(v, it, node, vis, low, disc, timer, cnt);
            low[node] = min(low[node], low[it]);
            if (low[it] > disc[node]) cnt += 4;
        }
    }
}
void solve(){
    int n, e;
    cin >> n >> e;
    vector<vector<int>> v(n + 1);
    while (e--){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<int> disc(n + 1);
    vector<int> low(n + 1);
    vector<int> vis(n + 1);
    int timer = 0;
    int cnt = 0;
    dfs(v, 1, -1, vis, low, disc, timer, cnt);
    cout << cnt << ' ';
}
int main(){

    return 0;
}