#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printvector(vector<vector<int>> &arr){
    for(int i=0;i<arr.size();i++){
        vector<int> &temp =arr[i];
        cout<<temp[0]<<"_"<<temp[1]<<endl;
    }
}

//here we are passing vector to the function and comparing their "1" index
bool my_comparator(vector<int>&a,vector<int>&b){
    return a[1]<b[1];

}

int main(){
    vector<vector<int>>arr;
    int n;
    cout<<"enter the size:";
    cin >>n ;
    for(int i=0;i<n;i++){
        vector<int>temp;
        int a,b;
         cout<<"Enter the Number:";
        cin>>a;
        cin>>b;
        temp.push_back(a);
        temp.push_back(b);
        arr.push_back(temp);
    }
    printvector(arr);


    cout<<endl;
    cout<<"vector after sorting"<<endl;
    sort(arr.begin(),arr.end());
    printvector(arr);


    cout<<endl;
    cout<<"vector after using comparator"<<endl;
    sort(arr.begin(),arr.end(),my_comparator);
     printvector(arr);

}