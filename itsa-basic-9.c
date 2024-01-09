
#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    while((scanf("%d",&num))!=EOF){
        int sum=0;
        for(int i=3;i<=num;i+=3){
            sum+=i;
        }
        printf("%d\n",sum);
    }
    return 0;
}