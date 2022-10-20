#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string& s, int i, int j){
    if (i >= j) return true;
    if (s[i] != s[j]) return false;
    return isPalindrome(s, i + 1, j - 1);
}
bool isPali(string s, int i){

}
int main(){
    string s = "abcba";
    cout << isPalindrome(s, 0, s.size() - 1);
    return 0;
}