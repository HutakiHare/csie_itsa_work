#include<stdio.h>   
#include<stdlib.h>   

int main(){
    int money,a1,a2,a3,change,c[3]={50,5,1},d[3]={0,0,0};
    scanf("%d,%d,%d,%d",&money,&a1,&a2,&a3);
    change=(money-(a1*15)-(a2*20)-(a3*30));
    if(change<0){
        printf("0\n");
    }else{
        for(int i=0;i<3;i++){
            d[i]=change/c[i];
            change%=c[i];
        }
        printf("%d,%d,%d\n",d[2],d[1],d[0]);
    }
    return 0;
}