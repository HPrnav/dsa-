#include<iostream>
using namespace std;
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,7,9}};
    int n=3;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            for(int j=n-1;j>=0;j--){
                cout<<mat[j][i]<<endl; 
        }
        }
        else{
             for(int j=0;j<n;j++){
            cout<<mat[j][i]<<endl;
             }
            }
        }
    }
