  import java.util.Stack;

public class infix1{
    public static void  main(String[] args){
         String exp="9-(5+3)*4/6";
         Stack<Integer>num=new Stack<>();
         Stack<Character> op=new Stack<>();
         
    for(int i=0;i<exp.length();i++){
        char ch=exp.charAt(i);
        int ascii=(int)ch;

        if(ascii>=48 && ascii<=57){
            num.push(ascii-48);
        }
        else if(op.size()==0 || ch=='(' ||op.peek()=='(') op.push(ch);

        else if(ch==')'){
            //complete the operation
            while(op.peek()!='('){

                int val2=num.pop();
                int val1=num.pop();
    
                if(op.peek()=='+') num.push(val1+val2);
                if(op.peek()=='-') num.push(val1-val2);
                if(op.peek()=='*') num.push(val1*val2);
                if(op.peek()=='/') num.push(val1/val2);
                op.pop();
            }
            op.pop();
          }
        
        else{
            
            if(ch=='+'||ch=='-'){
                //complete the operation
                int val2=num.pop();
                int val1=num.pop();

                if(op.peek()=='+') num.push(val1+val2);
                if(op.peek()=='-') num.push(val1-val2);
                if(op.peek()=='*') num.push(val1*val2);
                if(op.peek()=='/') num.push(val1/val2);
                op.pop();
                op.push(ch);
             }

             if(ch=='*' || ch=='/'){

                if(op.peek()=='*'||op.peek()=='/'){
                int val2=num.pop();
                int val1=num.pop();                
                if(op.peek()=='*') num.push(val1*val2);
                if(op.peek()=='/') num.push(val1/val2);     
                op.pop();
                op.push(ch);
                }
                else op.push(ch); //when the peek opearator are + or -
            }
        }
    }
    while(num.size()>1){
        int val2=num.pop();
        int val1=num.pop();
            if(op.peek()=='+')  num.push(val1+val2);
            if(op.peek()=='-') num.push(val1-val2);
            if(op.peek()=='*') num.push(val1*val2);
            if(op.peek()=='/') num.push(val1/val2);
            op.pop();
     }
    System.out.println(num.peek());   
}
} 
 
     

