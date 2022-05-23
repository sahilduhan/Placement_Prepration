#include<bits/stdc++.h>
using namespace std;
int longestRepeatingSubSeq(string a){
    string b = a;
    int m = a.length(), n = b.length();
    int t[m + 1][n + 1];
    for (int i = 0;i < m + 1;i++){
        for (int j = 0;j < n + 1;j++){
            if (i == 0 || j == 0) t[i][j] = 0;

            else if (a[i - 1] == b[j - 1] && i != j) t[i][j] = t[i - 1][j - 1] + 1;

            else t[i][j] = max(t[i - 1][j], t[i][j - 1]);
        }
    }
    return t[m][n];
}
int main(){

    string a = "aabebcdd";
    cout << longestRepeatingSubSeq(a) << endl;
    return 0;
}