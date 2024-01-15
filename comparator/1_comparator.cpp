#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//we prefer to pass the address of variable,bcox if we write just x and y it will create it 
//and pass again a copy of it which is not at all recommended
//here they are created and their address is passed

bool comp(int &x,int &y){
    return x > y;
}
//return type of comparator is always bool;

int main(){
    vector<int>arr={14,12,93,4,69,22,-3};
    int n=arr.size();
    cout<<"Original Vector is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"_";
    }

    cout<<endl;


    sort(arr.begin(),arr.end());
    cout<<"vector after Sorting is:";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"_";
    }
    cout<<endl;


    sort(arr.begin(),arr.end(),comp);
    cout<<"vector after  using comparator:";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"_";
    }



}