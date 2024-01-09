#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char num[100];
    while((scanf("%s",num))!=EOF){
        int recurse=1,len=strlen(num)-1;
        for(int i=0;i<(len-i);i++){
            if(num[i]!=num[len-i]){
                recurse=0;
                break;
            }
        }
        if(recurse){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}