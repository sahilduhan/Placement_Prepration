#include<bits/stdc++.h>
using namespace std;
bool check(int node, int col, vector<int>adj [], vector<int>& color){
    color[node] = col;

    for (auto it : adj[node]){
        if (color[it] == -1) check(it, !col, adj, color);
        else if (color[it] == col) return false;
    }
    return true;
}

bool isBipratite(int n, vector<int>adj []){
    vector<int>color(n, -1);
    for (int i = 0;i < n;i++){
        if (color[i] == -1){
            if (!check(i, 0, adj, color)) return false;
        }
    }
    return true;
}
int main(){



    return 0;
}