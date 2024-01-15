 import java.util.*;

class Node{
int data;
Node next;
public Node(){
    data=0;
    next=null;
}
public Node(int d){
    data=d;
    next= null;
}
public Node(int data,Node next){
this.data=data;
this.next=next;
}
}

public class main {


    public static void printLL(Node head){
        
        while (head != null) {
            System.out.print(head.data+"->");
            head=head.next;
        }
        System.out.println(" ");
    }
    
    public static  int count(Node head){
        int count =0;
        while(head!=null){
        count=count+1;
        head=head.next;
        }
        return count;
    }

    public static Node insert_head(Node head,int num){
        if(head.data==0){
            head.data=num;
        }
        else{
            Node newnode=new Node(num);
           
                newnode.next=head;
                head=newnode;
        }
        return head;
    }
    
    public static Node insert_at_k(Node head,int k,int data){
        Node dummy_head=head;
         
        Node newnode =new Node(data);
        Node  ahead =head.next;
        int  pos =2;
        while( pos!=k){
            dummy_head=dummy_head.next;
              pos++;
        }
        ahead=dummy_head.next;
        dummy_head.next=newnode;
        newnode.next=ahead;
        
        return head;
    }
    
    public static  Node insert_tail(Node tail,int data){
        Node newnode = new Node(data);
        tail.next=newnode;
        tail=newnode;
        return tail;
    }


    
    public static Node delete(Node  head,int num){
        Node temp=head;
        if( temp==null){
            return head ;
        }

        while(temp.data!= num){
            temp=temp.next;
        }
        temp.data=temp.next.data;
        temp.next=temp.next.next;
        return head;
    }
    public static Node delete_tail(Node head) {
    Node temp =head;
    while(temp.next.next!=null){
        temp=temp.next;
    }
    temp.next=null;
    return head;
    }

    public static void search(Node head,int num){
        Node temp=head;
        int count=1;
        while(temp!= null){
            temp=temp.next;
            count++;
            if(temp.data==num){
                System.out.println(num+"  is found at  "+count+"  position");
                return ;
            }
        }
            System.out.println(" The number is not present ");
            return;
        
    }
    public static void d_reverse(Node head){
           Node temp=head;
        if( temp.next==null){
            return;
        }
        temp= temp.next;
        d_reverse(temp);
        System.out.print( temp.data+"->");
    
    }

    public static void display_reverse(Node head){
         d_reverse(head);
         System.out.println(head.data);
    }
 
    public static Node reverse(Node head){
        Node prev=null;
        Node curr=head;
        while ( curr != null ) {
            Node ahead=curr.next;
            curr.next=prev;
            prev=curr;
            curr=ahead;
        }
        return prev;

    }

    public static void main( String[] args) {
        
int opt=0;
Node head=new Node();
Node tail =new Node();
tail=head;

 do {
    System.out.println("========================================");
    System.out.println("Linked List Programs                               ");
    System.out.println("\n1.insert  at head\n2.insert at tail\n3.insert at position\n4.delete  Node of given value\n5.delete tail\n6.search\n7.display reverse\n8.actual reverse\n9.print linked list\n10.quit");
    System.out.println("========================================");
    System.out.println("ENTER THE OPERATION TO BE PERFORMED");
     

Scanner sc =new Scanner(System.in);
opt=sc.nextInt();

     switch ( opt) {
        case 1: 
              System.out.println("enter the data to be inserted at head");
              int val=sc.nextInt();
              head=insert_head(head,val);
              break;
        case 2:System.out.println("enter the data to be inserted at  tail");
              val=sc.nextInt();
              tail=insert_tail(tail,val);
              break;
         case 3:System.out.println("enter the data to be inserted ");
              val=sc.nextInt();
              System.out.println("enter the  position to be inserted ");
              int pos=sc.nextInt();
              head=insert_at_k(head, pos, val);
              break;
        case 4:System.out.println("Enter the value of Node to be deleted");
              val=sc.nextInt();
              head=delete(head,val);
              break;
        case 5:System.out.println("deleting tail");
              head=delete_tail(head);
              break;
        case 6:System.out.println("Enter the data to search ");
              val=sc.nextInt();
              search(head, val);
              break;
        case 7:System.out.println("Reverse of linked list");
             display_reverse(head);
             break;
        case 8:System.out.println("actual reversing linked list");
             head=reverse(head);
             break;
        case 9:printLL(head);
        break;
        default: break;
    } 

}while ( opt<10);

}
}    