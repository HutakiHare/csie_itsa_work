#include<stdio.h>   
#include<stdlib.h>   

int main(){ 
    float arr[10];
    scanf("%f %f %f %f %f %f %f %f %f %f",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8],&arr[9]);
    float max=arr[0],min=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("maximum:%.2f\nminimum:%.2f\n",max,min);
    return 0;   
}  