#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxLen(vector<int>& A, int n){
        unordered_map<int, int>mp;
        vector<int>prefix;
        prefix[0] = A[0];
        for (int i = 1;i < n;i++) prefix[i] = A[i] + prefix[i - 1];
        int ans = 0;
        for (int i = 0;i < n;i++){
            if (mp.count(prefix[i])) ans = max(ans, i - mp[prefix[i]]);
            else mp[prefix[i]] = i;
        }
        return ans;
    }
};
int main(){




    return 0;
}