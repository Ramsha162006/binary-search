#include<bits/stdc++.h>
#include<vector>
using namespace std;

int missingK(vector<int>vec,int n,int k){
    for(int i = 0;i<=n;i++){
        if(vec[i]<=k){
            k++;
        }
        else{
            break;
        }
    }
    return k;
}

 int main(){
    vector<int>vec = {4,7,9,10};
    int n = 4;
    int k = 6;
    int ans = missingK(vec,n,k);
    cout<<ans;
}