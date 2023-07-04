#include<bits/stdc++.h>
using namespace std;
void dfs(int i, int j, int parColor, int newColor, vector<vector<int>>& image){
    if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size() || image[i][j] == newColor || image[i][j] != parColor) return;
    image[i][j] = newColor;
    dfs(i + 1, j, parColor, newColor, image);
    dfs(i, j + 1, parColor, newColor, image);
    dfs(i - 1, j, parColor, newColor, image);
    dfs(i, j - 1, parColor, newColor, image);
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    // Code here 
    dfs(sr, sc, image[sr][sc], newColor, image);
    return image;
}
int main(){



    return 0;
}