#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    int arr[10];
    char c;
    for(int i=0;i<10;i++){
        if(i==9){
            scanf("%c",&c);
        }else{
            scanf("%c ",&c);
        }
        if(isdigit(c)){
            arr[i]=(int)(c-'0');
        }else{
            arr[i]=10;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=9;j>0;j--){
            for(int k=0;k<j;k++){
                arr[j]+=arr[k];
            }
        }
    }
    if(arr[9]%11==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}