//dqueue is known as doubally ended queue 
//i.e we can add element from both side
#include<bits/stdc++.h>  
using namespace std;
int main(){
    deque<int> dk(2,5);
    dk.push_front(10);
    dk.push_back(10);
    for(int i:dk){
        cout<<i<<",";
    }
    cout<<"after erase"<<endl;
    dk.erase(dk.begin(),dk.begin()+1);
    for(int i:dk){
        cout<<i<<",";
    }
    cout<<endl<<"Is deque empty-->"<<dk.empty()<<endl;

    deque<int> dk1(10,5);
    cout<<"dq1 before erase";
    for(int i:dk1){
        cout<<i<<",";
    }
    dk1.erase(dk1.begin(),dk1.begin()+2);
    cout<<endl<<"dq1  after erase";
    for(int i:dk1){
        cout<<i<<",";
    }



}
  
    
    