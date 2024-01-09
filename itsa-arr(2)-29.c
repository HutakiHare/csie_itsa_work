#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int num;
    scanf("%d",&num);
    while(num!=-1){
        double x=((double)(num*num*num))/3;
        printf("%.1lf\n",x);
        scanf("%d",&num);
    }
    return 0;
}