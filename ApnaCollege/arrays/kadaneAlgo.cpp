#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={-1,4,-6,7,-4};
    int currSum=0,maxSum=0;
    for(int i=0;i<arr.size();i++){
        currSum+=arr[i];
        if(currSum<0) currSum=0;
        maxSum=max(maxSum, currSum);
    }
    cout<<maxSum<<endl;

    return 0;
}