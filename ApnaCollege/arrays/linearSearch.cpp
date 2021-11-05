#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>arr, int key){
    for(auto it: arr){
        if(it==key) return 1;
    }
    return -1;
}
int main()
{
    vector<int> arr={1,2,3,12,4,6,7,8,9,0};
    int key=4;
    int ans=linearSearch(arr, key);
    if(ans==1) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}