#include<bits/stdc++.h>
using namespace std;
int lowestCommonString(string a, string b, int m, int n){
    int t[m + 1][n + 1];

    for (int i = 0;i < m + 1 ;i++){
        for (int j = 0;j < n + 1;j++){

            if (i == 0 || j == 0) t[i][j] = 0;

            else if (a[i - 1] == b[j - 1]) t[i][j] = 1 + t[i - 1][j - 1];

            else t[i][j] = 0;
        }
    }
    return t[m][n];
}
int main(){
    string a = "abcdefgh", b = "abedfhr";
    int i = 8, j = 7;
    cout << lowestCommonString(a, b, i, j) << endl;

    return 0;
}