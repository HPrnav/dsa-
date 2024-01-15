#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool if_possible(vector<long long int>height,long long int mid,long long int m){
		long long int sum=0;
	for(int i=0;i<height.size();i++){
		if((height[i])>=mid){
		sum+=height[i]-mid;
		}
	}
	 
	return sum>=m;
}


long long int minHeight(vector<long long int>height,long long int n,long long int m){
     long long int ans=-1,end,start=0;
     long long int mid=0;
	 end= *max_element(height.begin(),height.end());
	while(start<=end){
	mid=start+(end-start)/2;
	if(if_possible(height,mid,m)){
		ans=mid;
		start=mid+1;;
	}
	else{
		end=mid-1;
	}
	}
	return ans;
}

int main() {
	long long int n,m,tall;
	cin>>n>>m;
	vector<long long int>height;
	while(n--){
		cin>>tall;
		height.push_back(tall);
	}
	
	cout<<minHeight(height,n,m);

	return 0;
}