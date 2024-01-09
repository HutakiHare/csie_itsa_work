#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){    //compare
   return (*(int*)b-*(int*)a);
}

int main(){
    int arr[9];
    char c;
    for(int i=0;i<9;i++){
        scanf("%d%c",&arr[i],&c);
    }
    qsort(arr,9,sizeof(int),cmp);
    printf("%d\n",arr[0]+arr[1]+arr[2]);
    return 0;
}