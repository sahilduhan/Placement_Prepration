#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maxSum=INT_MIN;
    vector<int> arr = {-1,4,7,2};
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            int sum=0;
            for(int k=i;k<j;k++){
                sum+=arr[k];
            }
            maxSum=max(maxSum, sum);
        }
    }
    cout<<maxSum;
    return 0;
}