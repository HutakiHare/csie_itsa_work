#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){    //compare
   return (*(int*)a-*(int*)b);
}

int main(){
    int T,m,k,num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        int sum=0;
        scanf("%d %d %d",&T,&m,&k);
        int mono[k];
        for(int j=0;j<k;j++){
            scanf("%d",&mono[j]);
        }
        qsort(mono,k,sizeof(int),cmp);
        for(int s=0;m>0&&T>0;s++){
            sum+=mono[s];
            T-=mono[s];
            m--;
        }
        if(m>0||T<0){
            printf("Impossible\n");
        }else{
            printf("%d\n",sum);
        }
    }


    return 0;
}