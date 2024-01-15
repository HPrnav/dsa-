#include<iostream>
using namespace std;

void first(int arr1[],int a1){
     
        for(int i=0;i<a1;i++){
            cin>>arr1[i];
}
}

void second(int arr1[],int a1){
     
        for(int i=0;i<a1;i++){
            cin>>arr1[i];
}
}

void intersect(int arr1[],int arr2[],int a1,int a2)
{
    int arr[100];
    int n=0;
    int z=0;
for(int i=0;i<a1;i++){
    for(int j=0;j<a2;j++){
        if(arr1[i]==arr2[j]){
            arr[z]=arr1[i];
            z++;
        }

    }
}
   for(int i=0;i<z;i++){
    cout<<arr[i]<<",";}
}

void uni(int arr1[],int arr2[],int a1,int a2){
    int arr[100];
    int count=0;
    int n=0,k;
    for(int i=0;i<a1;i++){
        arr[i]=arr1[i];
    }
     k=a1;

    for(int i=0;i<=a2;i++){
        for(int j=0;j<a1;j++){
        if( arr1[j]==arr2[i]){
            count=1;
            break;

        }
        }
        if(count==0){
            arr[k]=arr2[i];
            k++;
            count=0;
            

        }
    }
    for(int i=0;i<k;i++){
        cout<<arr[i]<<",";}
    }






int main(){
    int n;
    int arr1[100];
    int arr2[100];
    int a1,a2;


    do{
    cout<<"enter the size of array\n";
    cout<<"1.enter 1st array\n";
    cout<<"2.enter 2nd array\n";
    cout<<"3.find intersection\n";
    cout<<"4.find union\n";
    cout<<"enter the choice number:\n";
    cin>>n;

    switch(n){
        case 1:
        cout<<"enter size of first array";
        cin>>a1;
         first(arr1,a1);
         break;

        case 2:
        cout<<"enter size of second array";
        cin>>a2;
        second(arr2,a2);
        break;

        case 3:intersect(arr1,arr2,a1,a2);
        break;

        case 4:uni(arr1,arr2,a1,a2);
        break;

        default:
        cout<<"error"<<endl;

        
    }
    }while(n>0);
    }




