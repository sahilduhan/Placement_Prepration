#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int minThrow(int N, int arr []){
        vector<int>graph(31, 0);
        for (int i = 1;i < 31;i++) graph[i] = i;
        for (int i = 0;i < 2 * N;i += 2) graph[arr[i]] = arr[i + 1];
        vector<int> vis(31, 0);
        queue<pair<int, int>>q;
        q.push({1, 0});
        vis[1] = 1;
        while (!q.empty()){
            int curr = q.front().first;
            int step = q.front().second;
            q.pop();
            for (int i = 1;i <= 6;i++){
                int nx = curr + i;
                if (nx < 31 && !vis[graph[nx]]){
                    vis[graph[nx]] = 1;
                    q.push({graph[nx], step + 1});
                    if (graph[nx] == 30) return step + 1;
                }
            }
        }
        return -1;
    }
};
int main(){



    return 0;
}