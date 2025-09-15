#include<bits/stdc++.h>
#include<vector>
using namespace std;

int binarySearch(vector<int>& nums,int target){
	int n = nums.size();
	int low = 0,high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(nums[mid]==target) return mid;
		else if(target>nums[mid]) low =  mid+1;
		else
		high = mid-1;
		
	}
	return -1;
}
int main(){
	vector<int> a = {3,4,6,9,12,18,19};
	int target = 6;
	int ind = binarySearch(a,target);
	if(ind == -1)
	cout<<"target is not present "<<endl
	else
	cout<<ind<<endl;
}