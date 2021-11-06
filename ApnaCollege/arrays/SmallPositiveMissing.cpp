#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {0, -9, 1, 3, -4};
    int size=arr.size();
    vector<bool> check(size);
    for (int i = 0; i < check.size(); i++) check[i]=0;
    
    for(int i=0;i<size;i++){
        if(arr[i]>=0) check[arr[i]]=1;
    }
    int ans=-1;
    for(int i=1;i<check.size();i++){
        if(check[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}