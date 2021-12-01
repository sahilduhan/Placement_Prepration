#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num = "12344535";
    sort(num.begin(), num.end(), greater<int>());
    cout << num << endl;
    return 0;
}