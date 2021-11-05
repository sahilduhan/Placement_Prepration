#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    for(int i=0;i<arr.size();i++){
        int curr=0;
        for(int j=i;j<arr.size();j++){
            curr+=arr[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}