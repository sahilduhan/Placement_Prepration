#include<bits/stdc++.h>
using namespace std;
bool checPalindrome(string s, int i){
    int n = s.size();
    if (i >= n / 2) return true;
    if (s[i] != s[n - i - 1]) return false;
    return true;
}
int main(){
 
    return 0;
}