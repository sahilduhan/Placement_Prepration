#include<bits/stdc++.h>
using namespace std;
int longestPalindromicSubSequence(string a){

    string b = a;

    for (int i = 0;i < b.length() / 2;i++) swap(b[i], b[b.length() - i - 1]);

    int m = a.length(), n = b.length();

    int t[m + 1][n + 1];

    for (int i = 0;i < m + 1;i++){
        for (int j = 0;j < n + 1;j++){
            if (i == 0 || j == 0) t[i][j] = 0;
            else if (a[i] == b[j]) t[i][j] = t[i - 1][j - 1] + 1;
            else t[i][j] = max(t[i - 1][j], t[i][j - 1]);
        }
    }
    return t[m][n];
}
int main(){
    string a = "agbcba";
    cout << longestPalindromicSubSequence(a) << endl;
    return 0;
}