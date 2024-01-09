#include<stdio.h>
#include<stdlib.h>

int main(){
    int degree;
    double sum_d,nonsum_d;
    scanf("%d",&degree);
    sum_d=(degree>120? 120:degree)*2.10;
    nonsum_d=sum_d;
    degree=((degree-120)>0? degree-120:0);
    if(degree>0){
        sum_d+=(degree>210? 210:degree)*3.02;
        nonsum_d+=(degree>210? 210:degree)*2.68;
        degree=((degree-210)>0? degree-210:0);
        if(degree>0){
            sum_d+=(degree>170? 170:degree)*4.39;
            nonsum_d+=(degree>170? 170:degree)*3.61;
            degree=((degree-170)>0? degree-170:0);
            if(degree>0){
                sum_d+=(degree>200? 200:degree)*4.97;
                nonsum_d+=(degree>200? 200:degree)*4.01;
                degree=((degree-200)>0? degree-200:0);
                if(degree>0){
                    sum_d+=degree*5.63;
                    nonsum_d+=degree*4.50;
                }
            }
        }
    }
    printf("Summer months:%.2lf\nNon-Summer months:%.2lf\n",sum_d,nonsum_d);
    return 0;
}