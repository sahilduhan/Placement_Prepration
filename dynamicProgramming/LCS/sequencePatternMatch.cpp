#include<bits/stdc++.h>
using namespace std;
bool sequencePatternMatch(string a, string b){
    int m = a.length(), n = b.length();
    int t[m + 1][n + 1];
    for (int i = 0;i < m + 1;i++){
        for (int j = 0;j < n + 1;j++){
            if (i == 0 || j == 0) t[i][j] = 0;

            else if (a[i - 1] == b[j - 1]) t[i][j] = t[i - 1][j - 1] + 1;

            else t[i][j] = max(t[i - 1][j], t[i][j - 1]);
        }
    }

    if (a.length() == t[m][n]) return true;
    return false;
}
int main(){


    return 0;
}