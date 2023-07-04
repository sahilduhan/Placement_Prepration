#include<bits/stdc++.h>
using namespace std;
string multiply(string num1, string num2){
    if (num1 == "0" || num2 == "0") return "0";
    vector<int>ans(num1.size() + num2.size(), 0);
    for (int i = num1.size();i >= 0;i--){
        for (int j = num2.size() - 1;j >= 0;j--){
            ans[i + j + 1] = ((num1[i] - '0') * (num2[j] - '0'));
            ans[i + j] = ans[i + j + 1] / 10;
            ans[i + j + 1] %= 10;
        }
    }
    int i = 0;
    while (i < ans.size() and ans[i] == 0) i++;

    string finalAns = "";
    while (i < ans.size()) finalAns.push_back(ans[i++] + '0');
    return finalAns;
}
int main(){



    return 0;
}