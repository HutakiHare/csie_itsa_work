#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    while((scanf("%d",&num))!=EOF){
        int n=2,prime=1;
        while(n<num){
            if(num%n==0){
                prime=0;
                break;
            }
            n++;
        }
        if(prime){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}