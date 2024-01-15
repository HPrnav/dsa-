#include<iostream>
using namespace std;


int divide(int divident ,int divisor){
    int s=1;
    int ans=0;
    int e=divident;  
    int mid=s+(e-s)/2;
    while(s<=e){
    if( divident==mid*divisor){
        ans=mid;
        break;
        }
    else if(mid*divisor<divident){
        ans=mid;
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
    return ans;
}  



int main(){
    float divident=20;
    float divisor=3;
    float  quot=divide(divident,divisor);
    float inc=0.1;
    cout<<"The Quotient is="<<quot<<endl;

    for(int i=0;i<2;i++){

        while(quot*divisor<divident){
         quot+=inc;

        }
        quot-=inc;
         inc=inc/10;
    }

    cout<<"The Quotient is="<<quot<<endl;

}