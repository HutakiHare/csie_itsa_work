#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int F(int num){
    if(num==0){
        return 1;
    }
    if(num==1){
        return 2;
    }
    return (F(num-1)+F(floor(num/2)));
}

int main(){
    int num;
    while((scanf("%d",&num))!=EOF){
        printf("%d\n",F(num));
    }
    return 0;
}