#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;

    cout<<"size -->"<<v.capacity()<<endl;

    v.push_back(10);
    v.push_back(10);
    v.push_back(20);

    cout<<"capacity of vector-->"<<v.capacity()<<endl;
//prove that the size of vector doubles after it gets filled


    cout<<"no of element -->"<<v.size()<<endl;
 
    cout<<"element at 0"<<"-->"<<v.at(0)<<endl;

    v.pop_back();
    cout<<v.back()<<endl<< v.front()<<endl;

    //providing no of elements and element
     vector<int> v1(5,100);
     cout<<v1[0]<<endl;
     cout<<v1[1]<<endl;


     cout<<"copying vector to another vector"<<endl; 
     vector<int> a(v1);
     for(int i:a){
        cout<<i<<endl;
     }

     cout<<"Is the array empty-->"<<a.empty()<<endl;
}