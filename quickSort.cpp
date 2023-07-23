#include <bits/stdc++.h> 
using namespace std;
int partition(vector<int>& arr,int low, int high){
    int pivot= arr[low], i=low, j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1 ) i++;
        while (arr[j] > pivot && j>=low+1) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;

}
void quickSort(vector<int>& arr,int low, int high){
    if(low<high){
        int location= partition(arr,low,high);
        quickSort(arr,low,location-1);
        quickSort(arr,location+1,high);
    }
}
vector<int> quickSort(vector<int> arr){
    quickSort(arr,0,arr.size()-1);
    return arr;
}