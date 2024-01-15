#include<bits/stdc++.h>
using namespace std;

string solve(string num1,int pt1,string num2,int pt2,int carry){

    if(pt1<0 &&pt2<0){
        if(carry!=0){
            return string(1,carry+'0');  //here + '0' is added to convert no to string
            }
        return "";
    }

    int no1=(pt1>=0?num1[pt1]:'0')-'0';  // used turnary operator i.e if our pointer is greater than 0 i.e 
    int no2=(pt2>=0?num2[pt2]:'0')-'0'; //no i snot over then sent value of pointer otherwise send 0 and at 
    string ans="";                      // last '0' is substracted to to convert that sting to no

    int sum=no1+no2+carry;
    carry=sum/10;
    int digit=sum%10;
    ans.push_back(digit+'0');
 
    ans += solve(num1,pt1-1,num2,pt2-1,carry);
    return ans;
}

int main(){
    cout<<"starting the programe";
    string num1="420";
    string num2="321";
    int pt1=num1.size();
    int pt2=num2.size();
    int carry =0;
    string ans =solve(num1,pt1-1,num2,pt2-1,carry);
    reverse(ans.begin(),ans.end());
    cout<<"The addition of nums is "<<ans<<"....."<<endl;
   
    return 0;
}
