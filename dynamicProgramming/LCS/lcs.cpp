#include<bits/stdc++.h>
using namespace std;
int lcs(string a, string b, int i, int j){
    if (a[i] == '\0' || b[j] == '\0') return 0;

    if (a[i] == b[j]) return 1 + lcs(a, b, i + 1, j + 1);

    return max(lcs(a, b, i + 1, j), lcs(a, b, i, j + 1));
}
int main(){
    string a = "abcdefgh", b = "abedfhr";
    int i = 0, j = 0;
    cout << lcs(a, b, i, j) << endl;
    return 0;
}