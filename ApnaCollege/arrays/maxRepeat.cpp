#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 3, 3, 4, 5, 2, 5, 3, 5, 23};
    vector<int> idx;
    for(int i=0;i<idx.size();i++) idx[i]=-1;

    int val=INT_MAX;

    for(int i=0;i<arr.size();i++){
        if(idx[arr[i]] != -1) val= min(val, idx[arr[i]]);
        else idx[arr[i]]=i;
    }
    if(val==INT_MAX) cout<<"-1";
    else cout<<val+1;
    return 0;
}