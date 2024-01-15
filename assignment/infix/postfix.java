 import java.util.Stack;
public class postfix {
    
    public static  int evaluate(String s){
        Stack<Integer> st=new Stack<>();
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            int ascii=(int)ch;

            if((ascii>=48 && ascii<=57)){
                st.push(ch-48);
            }
            else{
                 int val2=st.pop();
                 int val1=st.pop();

                if(ch=='+') st.push(val1+val2);
                if(ch=='-') st.push(val1-val2);
                if(ch=='*') st.push(val1*val2);
                if(ch=='/') st.push(val1/val2);
            }
        }
        int ans=st.pop();
       return ans;
    }
    public static void  main(String[] args){
         String exp="1+2*3-4/5";
         Stack<String>num=new Stack<>();
         Stack<Character> op=new Stack<>();

    for(int i=0;i<exp.length();i++){
        char ch=exp.charAt(i);
        int ascii=(int)ch;

        if(ascii>=48 && ascii<=57){
            num.push(""+ch);
                }

        else if(op.size()==0 || ch=='(' ||op.peek()=='(') op.push(ch);

        else if(ch==')'){
            //complete the operation
            while(op.peek()!='('){

                 String val2=num.pop();
                 String val1=num.pop();
                char val=op.pop();
                String  s=val1+val2+val;
                num.push(s);
             }
            op.pop();
          }
        
        else{
            
            if(ch=='+'||ch=='-'){
                //complete the operation
                String val2=num.pop();
                String val1=num.pop();
                 char val=op.pop();   //operator
                 String  s=val1+val2+val;
                 num.push(s);
                op.push(ch);
             }

             if(ch=='*' || ch=='/'){
                if(op.peek()=='*'||op.peek()=='/'){
                String val2=num.pop();
                String val1=num.pop();
                char val=op.pop();   //operator
                String  s=val1+val2+val;
                num.push(s);
                op.push(ch);
                }
                else op.push(ch); //when the peek opearator are + or -
            }
        }
    }
    while(num.size()>1){
        String val2=num.pop();
        String val1=num.pop();
        char val=op.pop();
        String s=val1+val2+val;
        num.push(s);
     }
     String s=num.peek();
    System.out.println(s);   
    System.out.println(evaluate(s));
}
} 
 
     

