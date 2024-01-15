#include<iostream>
using namespace std;
 float sqrt(int num,int pre){
    cout<<"entered the function"<<endl;
    int s=0,e=num;
    float ans=1.000;
    int mid=s+(e-s)/2;
    while(s<=e){
        long long int sqr=mid*mid;
        if(sqr>num){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;}

            mid=s+(e-s)/2;
    }

    cout<<"got the answer"<<ans;
    float inc=0.1;
    for(int i=0;i<pre;i++){
        
        while(ans*ans<=num){
            ans+=inc;
        }
        ans-=inc;
        inc/=10;
    }
    cout<<"The answer is"<<ans;

    return ans;
}

int main(){
    int pre=3,num=10;
    cout<<"square root of "<<num<<"is :"<<sqrt(num,pre);
}