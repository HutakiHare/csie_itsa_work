#include<stdio.h>
#include<stdlib.h>

int main(){
    int year;
    while((scanf("%d",&year))!=EOF){
        if(year%4==0){
            if(year%100==0&&year%400!=0){
                printf("Common Year\n");
            }else{
                printf("Bissextile Year\n");
            }
        }else{
            printf("Common Year\n");
        }
    }
    return 0;
}