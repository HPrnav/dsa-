import java.util.Stack;
public class prefix {

    public static void  main(String[] args){
         String exp="9-(5+3)*4/6";
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
                String  s=val+val1+val2;
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
                 String  s=val+val1+val2;
                 num.push(s);
                op.push(ch);
             }

             if(ch=='*' || ch=='/'){

                if(op.peek()=='*'||op.peek()=='/'){
                String val2=num.pop();
                String val1=num.pop();
                char val=op.pop();   //operator
                String  s=val+val1+val2;
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
        String s=val+val1+val2;
        num.push(s);
     }
    System.out.println(num.peek());   
}
} 
 
     

