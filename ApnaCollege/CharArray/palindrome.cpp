#include <bits/stdc++.h>
using namespace std;
int main(){
    string word="nitin";
    bool ans= true;
    for(int i=0; i<word.length(); i++){
        if(word[i] != word[word.length()-i-1]) {
            ans = false;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}