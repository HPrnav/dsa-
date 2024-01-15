 #include<stdio.h>
 #include<stdlib.h>

 void transpose(int**mat,int n,int m){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            temp=*(*(mat+i)+j);
            *(*(mat+i)+j)=*(*(mat+j)+i);
            *(*(mat+j)+i)=temp;
            temp =0;
        }
    }
 }

  void addition(int **mat1,int **mat2,int **res,int n,int m){
     for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
            (*(*(res+i)+j))= (*(*(mat1+i)+j)) + (*(*(mat2+i)+j));
        }
    }
 }
 
 void multiplication(int **mat1,int **mat2,int **res,int n1,int m1){
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            for(int k=0;k<n1;k++){
                *(*(res+i)+j)= *(*(res+i)+j)+(*(*(mat1+i)+k)**(*(mat2+k)+j));
            }
        }
    } 
}
j;
 void display(int **mat,int n,int m){
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
             printf("  ");
             printf("\033[0;33m");
            printf("%d",(*(*(mat+i)+j)));
            printf("\033[0m");
        }
    }
    printf("\n");
 }

void accept(int **mat,int n,int m){
    for(int i=0;i<n;i++){
        printf("\n");     
        for(int j=0;j<m;j++){
            scanf("%d",(*(mat+i)+j));
        }
    }
 }


 int main(){
    int**mat1,**mat2,**res,n1,m1,i,j,k,z,ch;

    printf("enter the dimension of matrix");
    scanf("%d%d",&n1,&m1);//input as n=row and m=column

     mat1=(int**)malloc(sizeof(int)*n1);
     mat2=(int**)malloc(sizeof(int)*n1);
     res=(int**)malloc(sizeof(int)*n1);

    for(int i=0;i<m1;i++){
    *(mat1+i)=(int*)malloc(sizeof(int)*m1);
    *(mat2+i)=(int*)malloc(sizeof(int)*m1);
    *(res+i)=(int*)malloc(sizeof(int)*m1);
    }
    do{
    printf("1] accept first matrix.\n2] accept second matrix.\n3] display first matrix .\n4] display second matrix.\n5] addition of two matrix.\n6] multiplication of two matrix is.\n7] transpose of 1st matrix. \n8] transpose of 2nd matrix. \n");
    scanf("%d",&ch);
         
        switch(ch){
            case 1:printf(" enter element of 1st matrix");
                    accept(mat1,n1,m1);
                   break;
            case 2: printf(" enter element of 2nd matrix");
                    accept(mat2,n1,m1);
                   break;
            case 3:printf("display first matrix"); 
                  display(mat1,n1,m1);
                   break;
            case 4:printf("display second matrix");  
                  display(mat2,n1,m1);
                    break;
            case 5:printf("addition of two matrix");
                  addition(mat1,mat2,res,n1,m1);
                  display(res,n1,m1);
                   break;
            case 6:printf("multiplication of two matrix is");
                   multiplication(mat1,mat2,res,n1,m1);
                   display(res,n1,m1);
                    break;
                    
            case 7:printf("Transpose of  1st matrix is");
                   transpose(mat1,n1,m1);
                   display(mat1,n1,m1);
                    break;
            case 8:printf("Transpose of  2nd matrix is");
                   transpose(mat2,n1,m1);
                   display(mat2,n1,m1);
                    break;
            default:printf("error");
        }
    }while(ch<=8);
 }

    