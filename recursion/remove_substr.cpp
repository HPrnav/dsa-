#include<iostream>
using namespace std;

 void removeOcc(string &str, string &part){
        int pos=str.find(part);
        if(pos!=string::npos){

            string left_part=str.substr(0,pos);
            string right_part=str.substr(pos+part.size(),str.size());
            //give any value instead of s.size() as substr will run till end of string 
            // just it should be greater than remaining length of string so we gave string size
            str=left_part+right_part;
            removeOcc(str,part);
        }
        else{
            return ;
        }
    }


int main(){
string str="learningtolearnlearning";
string part="lear";
removeOcc(str,part);
cout<<"Modified String: "<<str<<endl;
}