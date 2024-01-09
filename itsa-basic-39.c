#include<stdio.h>
#include<stdlib.h>

int main(){
    int test[3],time;
    scanf("%d",&time);
    for(int t=0;t<time;t++){
        scanf("%d %d %d",&test[0],&test[1],&test[2]);
        int sum_p=0,count_fail=0,over80=0;
        for(int i=0;i<3;i++){
            if(test[i]<60){
                count_fail++;
            }
            if(test[i]>=80){
                over80=1;
            }
            sum_p+=test[i];
        }
        if(count_fail>0){
            switch(count_fail){
                case 1:
                    if(sum_p>=220){
                        printf("P\n");
                    }else{
                        printf("M\n");
                    }
                    break;
                case 2:
                    if(over80){
                        printf("M\n");
                        break;
                    }
                default:
                    printf("F\n");
                    break;
            }
        }else{
            printf("P\n");
        }
    }
    return 0;
}