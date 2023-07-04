#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> leftSmallElement(vector<int> arr, int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for (int i = 0; i < n; i++){
            while (st.top() != -1 && arr[st.top()] >= arr[i]) st.pop();
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> rightSmallElement(vector<int> arr, int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for (int i = n - 1; i > -1; i--){
            while (st.top() != -1 && arr[st.top()] >= arr[i]) st.pop();
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next = rightSmallElement(heights, n), prev = leftSmallElement(heights, n);
        int area = INT_MIN;
        for (int i = 0; i < n; i++){
            int l = heights[i];
            if (next[i] == -1) next[i] = n;
            int b = next[i] - prev[i] - 1;
            int newarea = l * b;
            area = max(newarea, area);
        }
        return area;
    }
};
int main(){



    return 0;
}