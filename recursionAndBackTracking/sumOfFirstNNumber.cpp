#include<bits/stdc++.h>
using namespace std;
void solve(int i, int sum = 0){
    if (i < 1){
        cout << sum << endl;
        return;
    }
    solve(i - 1, sum + i);
}
int sum(int num){
    if (num == 0) return 0;

    return num + sum(num - 1);
}
int fact(int num){
    if (num == 0 || num == 1) return 1;

    return num * fact(num - 1);
}
int main(){

    solve(10);
    cout << sum(10) << endl;


    cout << fact(5) << endl;

    return 0;
}