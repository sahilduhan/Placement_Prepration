#include<bits/stdc++.h>
using namespace std;
void topoSort(int i, vector<bool>&vis, vector<int>adj[], stack<int>&st){
    // if(!vis[i
    vis[i] = true;
    for(auto it : adj[i]){
        if(!vis[it]) topoSort(it,vis,adj,st);
    }
    st.push(i);
}
int main(){
    // stac

    return 0;
}