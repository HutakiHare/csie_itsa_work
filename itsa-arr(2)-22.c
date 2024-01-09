#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    int num,ticket[2];
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        int sum=0;
        scanf("%d %d",&ticket[0],&ticket[1]);
        sum+=(ticket[0]*250)+(ticket[1]*175);
        printf("%d\n",sum);
    }
    return 0;
}