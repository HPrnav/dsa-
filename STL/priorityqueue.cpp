#include<bits/stdc++.h>  
using namespace std;
int main(){
priority_queue<int>pq;     
pq.push(5);
pq.push(6);
pq.push(2);
pq.push(7);
pq.push(1);
pq.push(0);
int k=pq.size();
for(int i=0;i<k;i++){
    cout<<pq.top()<<endl;
    pq.pop();
}

pq.push(5);
pq.push(6);
pq.push(2);
pq.push(7);
pq.push(1);
pq.push(0);
cout<<"swapping the elements"<<endl;
priority_queue<int>pq2;
pq.swap(pq2);
int n=pq2.size();
for(int i=0;i<n;i++){
    cout<<pq2.top()<<endl;
    pq2.pop();
}

cout<<"Is pq empty-->"<<pq.empty();
cout<<"we have swapped the elements successfully";


}




 