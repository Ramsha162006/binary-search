#include<bits/stdc++.h>
#include<vector>
using namespace std;
int missingK(vector<int>vec,int n,int k){
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int missing = vec[mid]-(mid+1);
        if(missing<k){
            low = mid + 1;
        }
        else
            high = mid-1;
        
    }
    return k+low;
    
}
int main(){
    vector<int>vec = {4,7,9,10};
    int n = 4;
    int k = 6;
    int ans = missingK(vec,n,k);
    cout<<ans;
}