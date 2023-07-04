#include<bits/stdc++.h>
using namespace std;
string intToRoman(int integetNum, vector<int>& val, vector<string>& dict){
    string romanVal = "";

    for (int i = 0;integetNum != 0;i++){
        while (integetNum >= val[i]){
            integetNum -= val[i];
            romanVal += dict[i];
        }
    }
    return  romanVal;
}
int main(){

    vector<string>dict = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int>val = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string ans = intToRoman(555, val, dict);

    cout << ans << endl;



    return 0;
}