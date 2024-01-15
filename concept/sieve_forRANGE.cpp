#include<bits/stdc++.h>
using namespace std;

vector<bool> prime(int n){
vector<bool>sieve(n,true);//declering all n+1 as true

sieve[0] = sieve[1] = false;//1 and 2 are always prime
for(int i=2;i<=sqrt(n);i++){
    if(sieve[i]){
        int j=i*i;//we have first done j*2 otherwise our j itself will be marked false eg(3)
        while(j<n){
            sieve[j]=false;
            j+=i;
        }
    }
}
return sieve;
} 

vector<bool> segsieve(int L,int R){ //L is the lower bound of range and R upperbound.
    vector<int>base_prime;
    //sieve means it contain the prime number less tha the given ip number//here sieve contain prime number less than sqrt(n)which are put in to vector called base_prime 
    vector<bool>sieve=prime(sqrt(R));
    for(int i=2;i<sieve.size();i++){
        if(sieve[i]){
        base_prime.push_back(i);
        cout<<i;
    }
    }
    vector<bool>segsieve(R-L+1,true);//here this seg sieve is a vector
    if (L==1 || L==0){
        segsieve[L]=false;
    }

    for(auto prime:base_prime){
        int fir_mul=(L/prime)*prime;//first multiple
        if(fir_mul<L){
        fir_mul+=prime;//increase the first multiple till we get the number multiple to our range
        }
        int j=max(fir_mul,prime*prime);
        while(j<=R){
            segsieve[j-L]=false;//here by j-l we get the index
            //here which ever is muktiple of the no we are turning them false 
            j+=prime;
        }
    }
    return segsieve;
}

int main(){
    vector<bool>ans;
    int L=100;
    int R=130;

    ans=segsieve(L,R);//sedsieve =segment sieve;
    for(int i=2;i<ans.size();i++){
        if(ans[i]){
            cout<<i+L<<",";
        }
    }
return 0;
}
