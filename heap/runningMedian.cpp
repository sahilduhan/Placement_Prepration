#include<bits/stdc++.h>
using namespace std;
void balance(){

}

vector<int> findMedian(vector<int>& arr, int n){
    priority_queue<int>maxHeap;
    priority_queue<int, vector<int>, greater<int>>minHeap;
    vector<int>ans;
    for (auto it : arr){
        maxHeap.push(it);
        if (maxHeap.size() > minHeap.size() || (it > maxHeap.top() and maxHeap.size() > 2)){
            balance(maxHeap, minHeap);
        }
        if (maxHeap.size() == minHeap.size()){
            int median = maxHeap.top() + minHeap.top() / 2;
            ans.push_back(median);
        }
        if (maxHeap.size() > minHeap.size()) ans.push_back(maxHeap.top());
        else ans.push_back(minHeap.top());

    }


}