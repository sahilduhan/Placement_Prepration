#include<bits/stdc++.h>
using namespace std;
// void printName(int i, int n){
//     if (i > n) return;
//     cout << "sahil duhan" << endl;
//     printName(i + 1, n);
// }

void printN(int i){
    if (i < 1) return;
    cout << i << endl;
    printN(i - 1);
}

int main(){
    // printName(0, 10);
    printN(10);

}

