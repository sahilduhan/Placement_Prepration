#include<bits/stdc++.h>
using namespace std;
// int sumN(int i, int n){
//     int sum = 0;
//     if (i > n) return 0;
//     sum += i;
//     sumN(i++, n);
// }

// void sumTillN(int i, int sum){
//     if (i < 1){
//         cout << sum << endl;
//         return;
//     }
//     sumTillN(i--, sum + i);
// }

int sumN(int i){
    if (i == 0) return 0;
    return i + sumN(i - 1);
}
int main(){
    // sumTillN(10, 0);
    cout << sumN(10);
    return 0;
}