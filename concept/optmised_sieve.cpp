#include<bits/stdc++.h>
using namespace std;

vector<bool> prime(int n){
vector<bool>sieve(n,true); 

sieve[0] = sieve[1] = false; 
for(int i=2;i<=sqrt(n);i++){//optimization of sqrt(n)
    if(sieve[i]){
        int j=i*i; // optimization of i*i
        while(j<n){
            sieve[j]=false;
            j+=i;

        }
    }
}
return sieve;
} 


int main(){
    int n=25;

vector<bool>temp=prime(n);//here the function 'prime'is returning the vector which is store in vector temp.

for(int i=0;i<n;i++){
//here each index 'i' is representing a number 
    if(temp[i]){
        cout<<i<<",";
    }
}
return 0;
}
