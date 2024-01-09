#include<stdio.h> 
#include<stdlib.h>  
 
int main(){ 
    int row1,row2,col1,col2;
    scanf("%d %d",&row1,&col1);
    int arr1[row1][col1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    scanf("%d %d",&row2,&col2);
    int arr2[row2][col2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int result_arr[row1][col2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            result_arr[i][j]=0;
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            result_arr[i][j]+=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            if(j!=col2-1){
                printf("%d ",result_arr[i][j]);
            }else{
                printf("%d\n",result_arr[i][j]);
            }
        }
    }
    return 0; 
}  