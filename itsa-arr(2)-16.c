#include<stdio.h>     
#include<stdlib.h>     
#include<string.h>  
#include<ctype.h>   
     
int main(){     
      int sum=0;
      char c;
      for(int i=0;i<5;i++){
        scanf("%c",&c);
        if(c=='0'||c==' '){
            i--;
            continue;
        }
        if(isdigit(c)){
            if(c=='1'){
                sum+=10;
            }else{
                sum+=(int)(c-'0');
            }
        }else{
            switch(c){
                case 'A':
                    sum+=14;
                    break;
                case 'J':
                    sum+=11;
                    break;
                case 'Q':
                    sum+=12;
                    break;
                case 'K':
                    sum+=13;
                    break;
            }
        } 
      }
      printf("%d\n",sum);
    return 0;     
} 