#include <bits/stdc++.h>
using namespace std;
int kadane(vector<int>arr){
    int maxSum=0, currSum=0;
    for(int i=0;i<arr.size();i++){
        currSum+=arr[i];
        if(currSum>0) currSum=0;
        maxSum=max(maxSum,currSum);
    }
    return maxSum;
}
int main()
{
    vector<int> arr = {4, -4, 6, 10, -11, 12};
    int wrapSum=0, totalSum=0;
    int nonWrapsum=kadane(arr);

    for(int i=0;i<arr.size();i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapSum= totalSum+ kadane(arr);

    cout<<max(wrapSum, nonWrapsum);
    return 0;
}