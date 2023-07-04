#include<bits/stdc++.h>
using namespace std;
string solve(string str){
    int i = 0;
    string ans = "";
    while (i < str.size()){
        if (i < str.size() - 1 and str[i] == str[i + 1]){
            while (i < str.size() - 1 and str[i] == str[i + 1]) {
                i++;
            }
        }
        else ans += str[i];
        i++;
    }
    return ans;
}
string remove(string s){
    string res = s, temp = "";

    while (temp.size() != res.size()){
        temp = res;
        res = solve(res);
    }
    return res;
}
int main(){



    return 0;
}