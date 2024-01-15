 
import java.io.*;
import java.util.Scanner;
public class sparceMatrix{

    int MAX=100;
    int result [][]=new int[MAX][3] ;
    int row,len,col;
    int a[][]=new int[MAX][MAX];



    public sparceMatrix(int m,int n){
    	Scanner sc =new Scanner(System.in);
    	
        this.row = m;
        this.col =n;
        len=1;
        
         
   	    System.out.println("enter the element of matrix");
    	for(int i=0;i<m;i++) {
    		for(int j=0;j<n;j++) {
    			a[i][j]=sc.nextInt();
    		}
    	}
        

    	for(int i=0;i<m;i++) {
    		for(int j=0;j<n;j++) {
    			if(a[i][j]!=0) {
    				this.insert(i,j,a[i][j]);
    			}
    		}
    	}
    	
    	result[0][0]=m;
    	result[0][1]=n;
    	result[0][2]=len-1;
    	this.display();
    }
    

    public void insert(int r, int c,int v){
        if (r<=row && c<=col) {
            result[len][0]=r;
            result[len][1]=c;
            result[len][2]=v;
            len++;
         }
         else{
            System.out.println("Wrong Input");
         }
    }
    public void display( ){
        System.out.println("The Value Table of is:");
        System.out.println("Row" +"Column"+"Value");
        
        for(int i=0;i<len;i++){
            System.out.print(result[i][0]+"   ");
            System.out.print(result[i][1]+"   ");
            System.out.print(result[i][2]+"   "+ "\n");
        }     
    }
    
    
public void addition(sparceMatrix b){
	int k=0;
    sparceMatrix addresult =new sparceMatrix(MAX,3);
    if(row!=b.row || col!=b.col){
        System.out.println("Matrices are not compatible to add!");
    }
    else{
       
            int posa=1;
            int posb=1;
            while(posa<this.len && posb<b.len){
                if(result[posa][0]< b.result[posb][0] || (result[posa][0]==b.result[posb][0]  && result[posa][1]<b.result[posb][1])){
                    addresult.insert(result[posa][0],result[posa][1],result[posa][2]) ;
                    k++;
                    posa++;
                }
                else if(result[posa][0]> b.result[posb][0] || (result[posa][0]==b.result[posb][0]  && result[posa][1]>b.result[posb][1]) ) {
                	  addresult.insert(result[posb][0],result[posb][1],result[posb][2]) ;
                      k++;
                      posb++;
                }
                else {
                	
                	addresult.insert(posa, posb,(result[posb][2]+b.result[posb][2]) );
                	k++;
                }
            }
        }
    result[0][0]=b.row;
    result[0][1]=b.col;
    result[0][2]=k;
    System.out.println("displaying addition of matrix");
    for(int i=0;i<3;i++) {
    	for(int j=0;j<len;j++) {
    		System.out.println();
    	}
    }
    
 
    }




    public static void main(String[] args) {
    	 
    	Scanner sc =new Scanner(System.in);
    	System.out.println("enter the dimension of 1st matrix");
    	int m=sc.nextInt();
    	int n=sc.nextInt();
    	sparceMatrix m1= new sparceMatrix(m,n); 
    	
    	
    	System.out.println("enter the dimension of 2nd matrix");
    	m=sc.nextInt();
    	n=sc.nextInt();
    	sparceMatrix m2= new sparceMatrix(m,n); 
    	
    	m1.addition(m2);
     }
    
}

