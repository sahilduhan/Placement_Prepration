#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 35, 1234, 232};
    int mx = INT_MIN;
    for(int i=0;i<arr.size();i++){
        mx=max(mx, arr[i]);
    }
    cout<<mx<<endl;
    return 0;
}