//here the logic is if we have one operator between the opening bracket and closing bracket then it meand it is not a redundent bracket 
// i.e not a extra bracket but if no operaotr is present between the opening bracket and closing bracket then it is a redundent brackt
#include<iostream>
#include<stack>
using namespace std;
bool check_redudance(string str){
    stack<char> st;
    int top=-1;
    for(int i=0;i<str.length();i++){
        char ch=str[i];

        if ( ch=='(' || ch=='*' ||ch=='/'||ch=='+'||ch=='-'){ // if opening bracket or operator present hten push
            st.push(ch);
        }
        else if(ch==')'){        // if closing bracket present then check if operator was present in the stack or not

            int op_count=0;     //operator count
            while(!st.empty() && st.top()!='('){
                if(st.top()=='+' ||st.top()=='-' ||st.top()=='*' ||st.top()=='/'){
                    op_count++;
                }
                st.pop();
            }
            // here stack will either be empty or will have '(' at the top bcoz our while loop ends there
            st.pop();  
            if(op_count==0){
                return true;
            }
        }
    }
    //here loop will reach onlu when no'return true' execute 
return false;
     
}

int main(){
    //redundent bracket  means if extra unknown bracket is present
    string str ="((a+b)*(b+d))";
    bool ans=check_redudance(str);
    if(ans== true){
        cout<<"redudance bracket present ";
    }
    else{
        cout<<"redudance  bracket not present ";
    }
}