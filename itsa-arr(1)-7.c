#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int arr[9][9],fine=1;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%1d",&arr[i][j]);
        }
    }
    int check_arr[10];
    memset(check_arr,0,sizeof(check_arr[0])*10);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            check_arr[arr[i][j]]++;
            if((check_arr[arr[i][j]]>1)&&(arr[i][j]!=0)){
                fine=0;
                printf("row%d #%d\n",i+1,arr[i][j]);
                break;
            }
        }
        memset(check_arr,0,sizeof(check_arr[0])*10);
    }
    memset(check_arr,0,sizeof(check_arr[0])*10);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            check_arr[arr[j][i]]++;
            if((check_arr[arr[j][i]]>1)&&(arr[j][i]!=0)){
                fine=0;
                printf("column%d #%d\n",i+1,arr[j][i]);
                break;
            }
        }
        memset(check_arr,0,sizeof(check_arr[0])*10);
    }
    memset(check_arr,0,sizeof(check_arr[0])*10);
    int block_num=1,breakout=0;
    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            for(int k=i;k-i<3;k++){
                for(int s=j;s-j<3;s++){
                    check_arr[arr[k][s]]++;
                    if((check_arr[arr[k][s]]>1)&&(arr[k][s]!=0)){
                        fine=0;
                        breakout=1;
                        printf("block%d #%d\n",block_num,arr[k][s]);
                        break;
                    }
                } 
                if(breakout){
                    breakout=0;
                    break;
                }
            }
            memset(check_arr,0,sizeof(check_arr[0])*10);
            block_num++;
        }  
    }
    if(fine){
        printf("true\n");
    }
    return 0;
}
