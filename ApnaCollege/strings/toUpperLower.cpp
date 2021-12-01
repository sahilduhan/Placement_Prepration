#include <bits/stdc++.h>
using namespace std;
int main()
{
    string val = "abCFAFDSca";
    int i = 0;
    // for (int i = 0; i < val.length(); i++)
    // {
    //     if (val[i] >= 'a' && val[i] <= 'z') val[i] -= 32;
    // }
    transform(val.begin(), val.end(), val.begin(), ::toupper);
    cout << val << endl;
    transform(val.begin(), val.end(), val.begin(), ::tolower);
    cout << val << endl;

    return 0;
}