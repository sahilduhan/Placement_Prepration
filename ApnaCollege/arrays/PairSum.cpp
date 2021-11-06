#include <bits/stdc++.h>
using namespace std; 
bool PairSum(vector<int> arr, int key){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==key) return true;
        }
    }
    return false;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout<<PairSum(arr, 11);
    return 0;
}