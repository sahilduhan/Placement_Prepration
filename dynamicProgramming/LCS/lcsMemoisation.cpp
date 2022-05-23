#include<bits/stdc++.h>
using namespace std;
int t[1001][1001];

int lcs(string a, string b, int i, int j){
    if (a[i] == '\0' || b[j] == '\0') return 0;

    if (t[i][j] != -1) return t[i][j];

    if (a[i] == b[j]) return t[i][j] = 1 + lcs(a, b, i + 1, j + 1);

    else t[i][j] = max(lcs(a, b, i + 1, j), lcs(a, b, i, j + 1));

    return t[i][j];
}
int main(){
    memset(t, -1, sizeof(t));
    string a = "abcdefgh", b = "abedfhr";
    int i = 0, j = 0;
    cout << lcs(a, b, i, j) << endl;
    return 0;
}