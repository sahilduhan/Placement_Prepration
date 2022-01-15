#include <bits/stdc++.h>
using namespace std;
class Solution{
public:

    vector<int>BFStraversal(int v, vector<int>adjList []){
        vector<int>bfs;
        vector<int>visited(v + 1, 0);

        for (int i = 0; i < v;i++){
            if (!visited[i]){
                queue<int>q;
                q.push(i);
                visited[i] = 1;
                while (!q.empty()){
                    int node = q.front();
                    q.pop();
                    bfs.push_back(node);
                    for (auto i : adjList[node]){
                        if (!visited[i]){
                            q.push(i);
                            visited[i] = 1;
                        }
                    }
                }
            }
        }
        return bfs;
    }
};
int main(){


    return 0;
}