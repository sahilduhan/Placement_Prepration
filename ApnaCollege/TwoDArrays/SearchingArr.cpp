#include <bits/stdc++.h>
using namespace std;
bool SearchArr(vector<vector<int>> arr, int key){
    bool flag=false;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]==key){
                flag= true;
                break;
            }
        }
    }
    return flag;
}
int main()
{

    vector<vector<int>> arr={{1,2,3},{1,2,3},{1,2,3}};
    cout<<SearchArr(arr, 4);

    return 0;
}