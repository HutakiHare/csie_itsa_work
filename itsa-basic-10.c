#include<stdio.h>
#include<stdlib.h>

int gcd(int a,int b){
    if(b==0){
        return a;
    } 
    return gcd(b,a%b);
}

int main(){
    int num1,num2;
    while((scanf("%d %d",&num1,&num2)!=EOF)){
        printf("%d\n",gcd(num1,num2));
    }
    return 0;
}