#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int num,bit[8],positive=1;
    while((scanf("%d",&num))!=EOF){
        if(num<0){
            positive=0;
            num=abs(num);
        }
        memset(bit,0,sizeof(bit[0])*8);
        for(int i=0;num>0;i++){
            bit[i]=(num%2);
            num/=2;
        }
        if(positive){
            for(int i=7;i>=0;i--){
                printf("%d",bit[i]);
            }
        }else{
            int on=1;
            for(int i=7;i>=0;i--){
                if(on&&bit[i]==0){
                    printf("%d",1);
                }else{
                    on=0;
                    printf("%d",bit[i]);
                }
                
            }
        }
        printf("\n");
    }
    return 0;
}