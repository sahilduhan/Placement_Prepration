#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool solve(int i, int j, string& s, string& p){
        if (i == s.size() || j == p.size()) return true;
        if (i == s.size()){
            while (j < p.size() and p[j] == '*') j++;
            if (j == p.size()) return true;
            return false;
        }
        if (j == p.size()) return false;
        if (s[i] == p[j] || p[j] == '?') return solve(i + 1, j + 1, s, p);
        if (p[j] == '*') return solve(i, j + 1, s, p) | solve(i + 1, j, s, p);
        if (s[i] != p[j]) return false;
    }
    bool isMatch(string s, string p) {
        return solve(0, 0, s, p);
    }
};
int main(){



    return 0;
}