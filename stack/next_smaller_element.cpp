#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> find_smallest_element(int arr[],vector<int> &ans,int size){
    stack<int> st;
    st.push(-1);

    for(int i=size-1;i>=0;i--){           //iterating in backward direction
        while(st.top()>arr[i]){
            st.pop();
        }

        ans[i]=st.top();                 //putting the answer in backward direction
        st.push(arr[i]);
    }
    return ans;

}
int main(){
    int arr[]={4,3,2,1};
    int size=4;
    vector<int> ans(size);  //in above function we have assessed the index of 'ans' vector so we are passing size;
    find_smallest_element(arr,ans,size);
    cout<<"The next smallest element are:";
    for(int i:  ans) cout<<i<<"_";
    
}