#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,sum=0;
    for(int i=0;i<6;i++){
        scanf("%d",&n);
        sum+=(n*n*n);
    }
    printf("%d\n",sum);
    return 0;
}