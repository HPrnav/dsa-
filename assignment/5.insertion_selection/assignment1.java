import java.util.*;
public class assignment1
{
    public static void accept(int []arr,int n){
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
    }

    public static void display(int []arr,int n){
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+",");
        }
    }

    public static void intersection(int[] math,int m1,int []sci,int s1){
        int []temp =new  int[100];
        int  k=0;
        for(int i=0;i<m1;i++){
            for(int j=0;j<s1;j++){
                if(math[i]==sci[j]){
                   temp[k]=math[i];
                   k++;
                }
            }
        }
        
        System.out.println("INTER SECTION OF SET ARE:");
        for(int i=0;i<k;i++){
                 System.out.println(temp[i]);
        }
    }

    public static void union(int []math,int m1,int []sci,int s1){
          int[]temp =new int [ 100];
          int k=0;
         for(int i=0;i<m1;i++){
            temp[k]=math[i];
            k++;
         }
          for(int i=0;i<m1;i++){
            int count=0;
            for(int j=0;j<s1;j++){
                if(math[j]==sci[i]){
               count++;
                }
            }
            if(count<1){
                temp[k]= sci[i];
                k++;
            }
        }
        System.out.println("union of set is :");
        for(int i=0;i<k;i++){
            System.out.println(temp[i]+",");
        }
    }

    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int m1=0, s1=0,  n=0;
        // int math[];
         int[] math=new int[10];
         int[] sci=new int [10];
         do{
             System.out.println("1.enter the students like maths\n 2.enter the students like maths\n 3.find union\n 4.find intersection \n 5.display\n 6.Exit");
             System.out.println("Enter the no  operation to be performed");
               n=sc.nextInt();
             
            switch(n){
                case 1:System.out.println("enter the no of students like maths");
                        m1=sc.nextInt();
                      System.out.println("Enter the roll no of students like maths");
                      accept(math,m1);
                      break;
                case 2:System.out.println("enter the no of students like sci");
                        s1=sc.nextInt();
                      System.out.println("Enter the roll no of students like sci");
                      accept(sci,s1);
                      break;
                case 3:union(math,m1,sci,s1);
                break;
                case 4:intersection(math,m1,sci,s1);
                break;
                
            }
         }while(n<6);

    
    }
}