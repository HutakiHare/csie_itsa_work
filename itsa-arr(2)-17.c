#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[6];
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(j==5){
                printf("%-.3d",arr[i]*arr[j]);
            }else{
                 printf("%-.3d ",arr[i]*arr[j]);
            }
        }
        printf("\n");
    }
    return 0;
}