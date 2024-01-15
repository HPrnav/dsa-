#include<iostream>
using namespace std;
//program to find pivote element such that the sum of both side of pivote element is equal
    int pivotIndex(int nums[],int n) {//n is th esize of array
        float sum=0;
        float runadd=0;


        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }

        for(int j=0;j<n;j++){
            
            runadd=runadd+nums[j];
            if(runadd==(sum+nums[j])/2){
                return j;
            }
            
        }
        return -1;
    
    }
    
int main(){
    int nums[10]={1,2,3,4,6};
    int y=pivotIndex(nums,5);
    cout<<"The index is:"<<y;

}

