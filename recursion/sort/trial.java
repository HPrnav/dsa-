import java.util.*;
public class trial
{
public static void  swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
     static void quick(int arr[],int s,int e){
        if(s>=e) return;
        int i=s-1;
        int j=s;
        int pivote =e;
        while(j<pivote){

            if(arr[j]<arr[pivote]){
                i++;
                swap(arr,i,j);
            }
            j++;
        }
        i++;
        swap(arr,i,pivote);
        quick(arr,s,i-1);
        quick(arr,i+1,e);
     }
    public static void main(String[] args) {
        int arr[]={30,20,70,50,5};
        int size=5;
        int e=size-1;
        int s=0;
        quick(arr,s,e);
        for(int i=0;i<size;i++){
            System.out.println(arr[i]);
        }
    }
}