#include<bits/stdc++.h>
#include<vector>
using namespace std;
int lowerBound(vector<int> arr,int n,int x){
    int low = 0,high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,4,7};
    int n = 4;
    int x = 6;
    int ind = lowerBound(arr,n,x);
    cout<<ind<<"\n";
}