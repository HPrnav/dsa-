#include<bits/stdc++.h>
using namespace std;
int main(){
vector<vector<int>>arr;
vector<int> v1(2,5);
vector<int> v2(5,6);

arr.push_back(v1);
arr.push_back(v2);
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j];
    }
    cout<<endl;
}
    
}