import java.util.*;

class Node{
    Node next;
    Node prev;
    int  roll;
    String name;
    int marks;
    public  Node(){
        roll=0;}
        
    public Node(int roll,String name,int marks){
        this.roll=roll;
        this.name=name;
        this.marks=marks;
        prev=null;
        next=null;
    }
}


public class MAIN {
 
    Scanner sc= new Scanner( System.in);

    public static Node insert_head(Node head,Node newnode){
    
        head.prev=newnode;
        newnode.next=head;
        newnode.prev=null; 
        head=newnode;
        return head;
    }

    public static Node insert_tail(Node head,Node newnode){
    if(head==null||head.roll==0){
      head=newnode;
      return head;
    }
    System.out.println("inside tail");
    Node temp=head;
       while(temp.next!=null){
        temp=temp.next;
       }
       temp.next=newnode;
       newnode.prev=temp;
       return head;
    }


    public static Node  insert(Node head,int roll,String name,int marks){
     
        Node newnode=new Node(roll,name,marks);
 

        if(head==null||head.roll==0){
             head=newnode;
            return head;
        }
        
        if((newnode.roll)<(head.roll)){
 
            head=insert_head(head,newnode);
            return head;
        }


        Node  curr= head;
        Node back = new Node();

        while( curr!= null){
            if( (curr.roll)>(newnode.roll)){
                 back.next=newnode;
                newnode.prev=back;
                newnode.next=curr;
                curr.prev=newnode;
                return head;
            }
            back=curr;
            curr= curr.next;
        }
        head=insert_tail(head,newnode);
        
        return head;
        }

        public static void printLL(Node head){
            Node temp=head;
            while(temp!=null){
                System.out.print("->"+temp.roll);
                temp=temp.next;
            }
            System.out.println(" ");
        }

public static void search(Node head,int roll){
Node temp=head;
while(temp!=null){
    if(temp.roll == roll){
    System.out.println("RECORD FOUND");
    System.out.println("ROLL :"+temp.roll);
    System.out.println("NAME :"+temp.name);
    System.out.println("MARKS:"+temp.marks);
    return;
    }
    temp=temp.next;
}
System.out.println("Record not found");
}

public static void display_reverse(Node head){
    Node temp =head;
    while(temp.next!=null){
        temp=temp.next;
    }
    while(temp != null){
        System.out.print(temp.roll+"->");
        temp=temp.prev;
    }
    System.out.println(" ");
}

public static Node delete(Node  head,int num){
    Node temp=head;
    if( temp==null){
        return head ;
    }

    while(temp.roll!= num){
        temp=temp.next;
    }
    temp.roll=temp.next.roll;
    temp.next=temp.next.next;
    return head;
}

 
public static  Node modify (Node head,int roll){
    Node temp =head;
    while( temp!=null){
        if( temp.roll==roll){
            System.out.println("Enter new name");
            Scanner sc =new Scanner(System.in);
            String s1 =sc.nextLine();
            temp.name=s1;

            System.out.println("Enter new  marks");
            int mark=sc.nextInt();
            temp. marks=mark;

            return head;
        }
    }
    return head;

}
public static void main(String[] args) {
    Scanner sc = new Scanner( System.in);
    int opt=0;
    Node head=new Node();
      
     do {
        System.out.println("================================");
        System.out.println("Linked List Programs                               ");
        System.out.println("1.insert at appropriate \n2.display \n3.search record\n4.Display Reverse\n5.delete record\n6.modify");
        System.out.println("================================");
        System.out.println("ENTER THE OPERATION TO BE PERFORMED");
         
     
    opt=sc.nextInt();
     
    switch ( opt) {
             case 1:  
                  System.out.println("enter the  roll");
                  int  roll=sc.nextInt();
                  System.out.println("enter the   name ");
                  String name=sc.next();
                  System.out.println("enter the marks");
                  int marks=sc.nextInt();
                  head=insert(head,roll,name,marks);
                  printLL(head);
                  break;
            case 2:printLL(head);
            break;
            case 3: System.out.println("Enter the  rollof record to be search");
                  roll=sc.nextInt();
                  search(head,roll);
                  break;
            case 4:display_reverse(head);
            break;
            case 5:System.out.println("Enter the roll no of which record is to be deleted");
                  roll=sc.nextInt();
                  head=delete(head,roll);
                  printLL(head);
                  break;
            case 6:System.out.println("Enter the roll no to be modified");
            roll=sc.nextInt();
            head=modify(head,roll);
            printLL(head);
            break;
            default: break;
        } 
    }while ( opt<7);
    
}    
}


    
