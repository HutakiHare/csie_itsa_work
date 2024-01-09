#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int hour1,min1,hour2,min2;
    while((scanf("%d %d %d %d",&hour1,&min1,&hour2,&min2)!=EOF)){
        int tot_min,price=0;
        if(min2>=min1){
            tot_min=(hour2-hour1)*60+(min2-min1);
        }else{
            tot_min=(hour2-hour1-1)*60+(60-min1+min2);
        }
        if(tot_min>120){
            price=120;
            tot_min-=120;
            if(tot_min<120){
                price+=(tot_min/30)*40;
            }else{
                price+=160;
                tot_min-=120;
                price+=(tot_min/30)*60;
            }
        }else{
            price=(tot_min/30)*30;
        }
        printf("%d\n",price);
    }
    return 0;
}