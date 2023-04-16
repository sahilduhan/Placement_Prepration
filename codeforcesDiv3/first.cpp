
#include<bits/stdc++.h>
using namespace std;
void isCat() {
    int n; cin >> n;
    string str; cin >> str;
    int m = 0, e = 0, o = 0, w = 0;
    int idx = 0;
    if (str[idx] == 'm' or str[idx] == 'M')
        while ((str[idx] == 'm' or str[idx] == 'M') and idx < n){
            m = 1;
            idx++;
        }
    else{
        cout << "NO" << endl;
        return;
    }
    if (str[idx] == 'e' or str[idx] == 'E')
        while ((str[idx] == 'e' or str[idx] == 'E') and idx < n){
            e = 1;
            idx++;
        }
    else{
        cout << "NO" << endl;
        return;
    }
    if (str[idx] == 'o' or str[idx] == 'O')
        while ((str[idx] == 'o' or str[idx] == 'O') and idx < n){
            o = 1;
            idx++;
        }
    else{
        cout << "NO" << endl;
        return;
    }
    if (str[idx] == 'w' or str[idx] == 'W')
        while ((str[idx] == 'w' or str[idx] == 'W') and idx < n){
            w = 1;
            idx++;
        }
    else{
        cout << "NO" << endl;
        return;
    }

    if (m == 1 and e == 1 and o == 1 and e == 1 and idx == n) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main(){
    int t; cin >> t;
    while (t--){
        isCat();
    }
    return 0;
}