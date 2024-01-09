#include<stdio.h>
#include<stdlib.h>

int main(){
   int hour,min;
   scanf("%d %d",&hour,&min);
   if(hour>=1&&hour<3){
    printf("ox\n");
   }else if(hour>=3&&hour<5){
    printf("tiger\n");
   }else if(hour>=5&&hour<7){
    printf("rabbit\n");
   }else if(hour>=7&&hour<9){
    printf("dragon\n");
   }else if(hour>=9&&hour<11){
    printf("snake\n");
   }else if(hour>=11&&hour<13){
    printf("horse\n");
   }else if(hour>=13&&hour<15){
    printf("goat\n");
   }else if(hour>=15&&hour<17){
    printf("monkey\n");
   }else if(hour>=17&&hour<19){
    printf("rooster\n");
   }else if(hour>=19&&hour<21){
    printf("dog\n");
   }else if(hour>=21&&hour<23){
    printf("pig\n");
   }else{
    printf("rat\n");
   }
    return 0;
}