#include<bits/stdc++.h>
using namespace std;
void minimumInsertionDeletion(string a, string b, int m, int n){

    int t[m + 1][n + 1];
    int insertion = 0, deletion = 0 ;
    for (int i = 0;i < m + 1;i++){
        for (int j = 0;j < n + 1;j++){
            if (i == 0 || j == 0) t[i][j] = 0;

            else if (a[i - 1] == b[j - 1]) t[i][j] = t[i - 1][j - 1] + 1;

            else t[i][j] = max(t[i - 1][j], t[i][j - 1]);
        }
    }
    cout << "deletion : " << abs(m - t[m][n]) << " Deletion : " << abs(n - t[m][n]) << endl;
}
int main(){
    string a = "heap", b = "pea";
    int m = a.length(), n = b.length();
    minimumInsertionDeletion(a, b, m, n);
    return 0;
}