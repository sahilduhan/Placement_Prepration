#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string a){
    string s = a;
    reverse(s.begin(), s.end());
    return s == a;
}
void printPalindromicSubStrings(string& a){
    for (int i = 0;i < a.length();i++){
        for (int j = i + 1 ;j <= a.length();j++){
            string c = a.substr(i, j);
            if (isPalindrome(c)) cout << c << endl;
        }
    }
}
int main(){
    string a = "abcd";
    printPalindromicSubStrings(a);
    return 0;
}