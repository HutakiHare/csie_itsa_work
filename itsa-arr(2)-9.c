#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        if(num/1000==0||num/1000>=10){
            printf("Failure Input\n");
        }else{
            int digit[10],r=1000,good=0;
            memset(digit,0,sizeof(digit[0])*10);
            for(int j=1000;j>=1;j/=10){
                digit[num/j]++;
                num%=j;
            }
            for(int k=0;k<10;k++){
                if(digit[k]==2){
                    if(good==1){
                        good=0;
                        break;
                    }
                    good=1;
                }
                if(digit[k]>2){
                    good=0;
                    break;
                }
            }
            if(good){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }
    }
    return 0;
}