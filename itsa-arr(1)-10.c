#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int type,time;
    float pay;
    scanf("%d, %d",&type,&time);
    switch(type){
        case 186:
            pay=round(time*0.09);
            if(pay<=186){
                pay=186;
            }else if(pay<=186*2){
                pay=round(0.9*pay);
            }else{
                pay=round(0.8*pay);
            }
            break;
        case 386:
            pay=round(0.08*time);
            if(pay<=386){
                pay=386;
            }else if(pay<=386*2){
                pay=round(0.8*pay);
            }else{
                pay=round(0.7*pay);
            }
            break;
        case 586:
            pay=round(0.07*time);
            if(pay<=586){
                pay=586;
            }else if(pay<=586*2){
                pay=round(0.7*pay);
            }else{
                pay=round(0.6*pay);
            }
            break;
        case 986:
            pay=round(0.06*time);
            if(pay<=986){
                pay=986;
            }else if(pay<=986*2){
                pay=round(0.6*pay);
            }else{
                pay=round(0.5*pay);
            }
            break;
    }
    printf("%.0f\n",pay);
    return 0;
}