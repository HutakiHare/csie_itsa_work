#include<stdio.h>
#include<stdlib.h>

int main(){
    double X,Y;
    while((scanf("%lf %lf",&X,&Y))!=EOF){
        if((X*X+Y*Y)<=10000){
            printf("inside\n");
        }else{
            printf("outside\n");
        }
    }
    return 0;
}