#include<iostream>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(int arr[],int sz) {
        int s=0,e=sz;
        int mid=s+(s-e)/2;

        
        while(s<e){
            //we have not written s<=e bcoz our condition will be satisfied when s=e so it should terminate the loop
            if(arr[mid] < arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        //bcoz at last end and start at  same position 
    return e;
    }
};

int main(){
    int arr[]={1,2,3,4,5,6,3,1};
    Solution s;
    int k=s.peakIndexInMountainArray(arr,8);
    cout<<"peak index is "<<arr[k];
}