#include<bits/stdc++.h>
using namespace std;
// int t[1001][1001];
int solve(vector<int>& length, vector<int>& profit){
    int lSize = length.size(), pSize = profit.size();

    int t[pSize][lSize];

    for (int i = 0;i < pSize + 1;i++){
        for (int j = 0;j < lSize;j++){
            if (i == 0 || j == 0) t[i][j] = 0;

            if (length[i - 1] < j) t[i][j] = max(t[i - 1][j], profit[i - 1] + t[i][j - length[i - 1]]);

            else t[i][j] = t[i - 1][j];
        }
    }
    return t[pSize][lSize];
}
int main(){



    return 0;
}