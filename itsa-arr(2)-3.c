#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){    //compare
   return (*(int*)a-*(int*)b);
}

int main(){
    int num;
    scanf("%d",&num);
    int score[num];
    for(int i=0;i<num;i++){
        scanf("%d",&score[i]);
    }
    qsort(score,num,sizeof(int),cmp); 
    for(int i=0;i<num;i++){
        printf("%d\n",score[i]);
    }
    return 0;
}