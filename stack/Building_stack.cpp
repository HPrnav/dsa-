 #include<iostream>
using namespace std;


class stack{

    public:
    int* arr;
    int size;
    int top;
    stack(int size){
        arr=new int[size];
        this->top=-1;
        this->size=size;
    }
    void push(int x){
        if(top==size){
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            return;
        }
        top--;
    }

    int gettop(){
        if(top==-1){
            cout<<"stack is empty";
            return 0;
        }
        else{
            return arr[top];
        }
    }

   bool isEmpty(){
    if(top==-1){
        return  1;
     }else{
        return 0;
    }
   }
    
    void print_info(){
       for(int i=0;i<=top;i++){
        cout<<arr[i]<<"->";
       }
        
    }
    


};
int main(){
    stack st(5);

    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(1);

    cout<<"The top is:"<<st.gettop()<<endl;

    cout<<"Printing the stack:";
    st.print_info();
    cout<<endl;

    cout<<"Performing pop opertion";
    st.pop();

    cout<<"Printing the stack:"<<endl;
    st.print_info();    
    cout<<endl;

    cout<<"Is the stack empty"<<st.isEmpty();
    return 0;
}