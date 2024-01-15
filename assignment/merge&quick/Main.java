package mergesort;

import java.util.*;

class Solution{

 private static void merge(int []arr,int low ,int mid ,int high){
    ArrayList<Integer> temp = new ArrayList<>();
    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[high]){
            temp.add(arr[left]);
            left++;
        }
        else{
            temp.add(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.add(arr[left]);
        left++;
    }
    while(right<=mid){
        temp.add(arr[right]);
        right++;
    }
    
    for(int i=low;i<=high;i++){
        arr[i]=temp.get(i-low);
    }
 }


public static void mergesort(int[] arr,int low,int high){
    if(low>=high){ return;}
int mid=(low+high)/2;
mergesort(arr,low,mid);
mergesort(arr,mid+1,high);
merge(arr,low,mid,high);
}


}

public class Main{
    
    public static void main(String[] args){
        int n=7;
        int arr[]={ 9, 3, 7, 1, 4, 2, 6};

        Solution.mergesort(arr, 0, n-1);
        
          for(int i=0;i<n;i++){
            System.out.println( arr[i]);
        }
 
        }
    
}

