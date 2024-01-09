#include<stdio.h>
#include<stdlib.h>

int main(){
    int height,gender;
    double standard;
    while((scanf("%d %d",&height,&gender))!=EOF){
        if(gender==1){
            standard=(height-80)*0.7;
        }else{
            standard=(height-70)*0.6;
        }
        printf("%.1lf\n",standard);
    }
    return 0;
}