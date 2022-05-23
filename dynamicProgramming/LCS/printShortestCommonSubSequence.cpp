#include<bits/stdc++.h>
using namespace std;
void printShotestCommonSubSequence(string a, string b){
    int m = a.length(), n = b.length();
    int t[m + 1][n + 1];
    for (int i = 0;i < m + 1;i++){
        for (int j = 0;j < n + 1;j++){
            if (i == 0 || j == 0) t[i][j] = 0;

            else if (a[i] == b[j]) t[i][j] = t[i - 1][j - 1] + 1;

            else t[i][j] = max(t[i - 1][j], t[i][j - 1]);

        }
    }
    int i = m, j = n;
    string ans;
    while (i > 0 and j > 0){
        if (a[i] == b[j]) {
            ans.push_back(a[i]);
            i--;
            j--;
        }
        else {
            if (t[i][j - 1] > t[i - 1][j]) j--;
            else i--;
        }
    }

}
int main(){


    return 0;
}