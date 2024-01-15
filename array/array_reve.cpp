 #include<iostream>
 using namespace std;

 void print_rev(int brr[],int n){
    int start=0;
    int end=n-1;
        for(int i=0;i<end;i++){
            swap(brr[start],brr[end]);
            start++;
            end--;
        }
   }

void print_arr(int brr[],int n){
        for(int i=0;i<n;i++){
            cout<<brr[i];
        }
    }


 int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     print_rev(arr,n);
     print_arr(arr,n);

    }
 
