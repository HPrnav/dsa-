#include<bits/stdc++.h>
using namespace std;

vector<bool> prime(int n){
vector<bool>sieve(n,true);//declering all n+1 as true

sieve[0] = sieve[1] = false;//1 and 2 are always prime
for(int i=2;i<n;i++){
    if(sieve[i]){
        int j=2*i;//we have first done j*2 otherwise our j itself will be marked false eg(3)
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
