#include<iostream>
#include<vector>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int p=0,n=1;
        int k=0;
        while(k<nums.size()){
            if(nums[k]<0){
            ans[n]=nums[k];
            n=n+2;
            }
            else{
                ans[p]=nums[k];
                p=p+2;
            }
            k++;

        }
         return ans;
    }
int main(){
    vector<int>nums={3,-3,-4,5,-6,7,1};
    nums=rearrangeArray(nums);
    for (auto elem : nums) {
        cout << elem <<",";
    }
}