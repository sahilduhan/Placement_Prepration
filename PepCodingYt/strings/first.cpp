#include<bits/stdc++.h>
using namespace std;
void printSubStrings(string& a){
    for (int i = 0;i < a.size();i++){
        for (int j = i;j < a.size();j++) cout << a.substr(i, j) << endl;
    }
}
int main(){
    string a = "abcd";
    printSubStrings(a);
    return 0;
}