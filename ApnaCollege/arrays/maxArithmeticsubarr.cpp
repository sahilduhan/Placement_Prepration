#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,0,7,2,0,2,2};
    int ans = 0, mx = -1;
    for(int i=0;i<arr.size();i++){
        if(arr[i] > mx && arr[i]>arr[i+1]){
            ans++;
            mx =max(mx, arr[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}