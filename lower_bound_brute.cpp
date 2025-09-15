#include<bits/stdc++.h>
#include<vector>
using namespace std;
int lowerBound(vector<int> arr,int n,int x){
    for(int i = 0;i<n;i++){
        if(arr[i] >= x){
            return i;
        }
    }
    return n;

}
int main(){
    vector<int> arr = {3,5,8,15,19};
    int n = 5;
    int x = 9;
    int ind = lowerBound(arr,n,x);
    cout<<ind<<"\n";
}