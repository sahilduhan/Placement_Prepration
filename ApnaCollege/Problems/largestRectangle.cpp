#include <bits/stdc++.h>
using namespace std;
int largestRectangle(vector<int>arr){
    int ans = 0;
    for (int i = 0;i < arr.size();i++){
        int minh = 0;
        for (int j = i ;j < arr.size();j++){
            minh = min(arr[j], minh);
            int len = j - i - 1;
            ans = max(ans, minh * len);
        }
    }
    return ans;
}
int main(){


    return 0;
}