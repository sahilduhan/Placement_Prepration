#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int key){
    int start=0, end=arr.size();
    while(start<=end){
        int mid= (start+end)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) end=mid-1;
        else start= mid+1;
    }
    return -1;
}
int main()
{
    vector<int>arr={1,2,3,4,5,6};
    int key=9;
    int ans=binarySearch(arr,key);
    if(ans== -1) cout<<"Not found";
    else cout<<"Found";



    return 0;
}