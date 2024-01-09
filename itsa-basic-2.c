#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    double km;
    while(scanf("%d",&num)!=EOF){
        km=num*1.6;
        printf("%.1lf\n",km);
    }
    return 0;
}