#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>> arr={{1,2,3},{1,2,3},{1,2,3}};

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";        
        }    
        cout<<endl;
    }

    return 0;
}