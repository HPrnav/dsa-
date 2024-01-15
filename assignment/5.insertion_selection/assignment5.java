public class assignment5 {


    public static void selectionSort(String [] arr,int n){
        for(int i=0;i<n;i++){
            int min_ind=i;
            String min_str=arr[i];
            for(int j=i+1;j<n;j++){
                if(min_str.compareTo(arr[j])>0){
                    min_str=arr[j];
                    min_ind=j;
                }
            }
            if(min_ind!=0){
                String temp=arr[i];
                arr[i]=arr[min_ind];
                arr[min_ind]=temp;
            }
        }
    }
      public static void insertionSort(String [] arr,int n){
        for(int i=1;i<n;i++){
            String key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j].compareTo(key)<0){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }

    public static  int bin_search( String []arr,String str,int n){
        int s=0,e=n;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==str){
                return mid;
            }
            else if(arr[mid].compareTo(str)>0){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;        
    }

    public static void main(String[] args) {
        String [] arr={"java","python","goland","ruby","javascript"};
        int n=arr.length;
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+"_");
        }


        System.out.println();
        System.out.print("Selectio Sort:");
        selectionSort(arr,n);
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+"_"); }
        System.out.println();

        System.out.println("insertion sort");
        insertionSort(arr,n);
         for(int i=0;i<n;i++){
            System.out.print(arr[i]+"_"); }


            String str="goland";
       System.out.println(bin_search(arr,str,n));  

    }
}
