#include<bits/stdc++.h>
using namespace std;
string addStrings(string num1, string num2) {
    int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
    string ans = "";
    while (i >= 0 || j >= 0 || carry){
        int sum = 0;
        if (i >= 0) sum += num1[i--] - '0';
        if (j >= 0) sum += num2[j--] - '0';

        sum += carry;
        carry = sum / 10;
        sum %= 10;

        ans += to_string(sum);
    }
    reverse(ans.begin(), ans.end());
    return ans;

}
int main(){




    return 0;
}