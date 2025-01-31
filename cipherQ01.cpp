#include<bits/stdc++.h>
using namespace std;
int naive(vector<int>& nums,int n){
	int total=0;
	for(int i=0;i<n;i++){
		total+=nums[i];
	}
	return total;
}
int recursum(vector<int>& nums,int index,int n){
	if(index>=n){
		return 0;
	}
	return nums[index]+recursum(nums,index+1,n);
}
int inbuilt(vector<int>& nums){
	return accumulate(nums.begin(),nums.end(),0);
}
int main(){
	vector<int> nums;
	nums.push_back(5);
	nums.push_back(2);
	nums.push_back(4);
	nums.push_back(1);
	nums.push_back(3);
	int n=5;
	cout<<"Naive Approach "<<naive(nums,n)<<endl;
	cout<<"Recursive Approach "<<recursum(nums,0,n)<<endl;
	cout<<"Using Built-In Functions "<<inbuilt(nums)<<endl;
	return 0;
}
