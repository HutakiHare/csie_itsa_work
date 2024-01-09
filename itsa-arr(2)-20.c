#include<stdio.h>
#include<stdlib.h>

int main(){
    int year;
    scanf("%d",&year);
    switch(year%12){
        case 0:
            printf("monkey\ntiger\n");
            break;
        case 1:
            printf("rooster\nrabbit\n");
            break;
        case 2:
            printf("dog\ndragon\n");
            break;
        case 3:
            printf("pig\nsnake\n");
            break;
        case 4:
            printf("rat\nhorse\n");
            break;
        case 5:
            printf("ox\ngoat\n");
            break;
        case 6:
            printf("tiger\nmonkey\n");
            break;
        case 7:
            printf("rabbit\nrooster\n");
            break;
        case 8:
            printf("dragon\ndog\n");
            break;
        case 9:
            printf("snake\npig\n");
            break;
        case 10:
            printf("horse\nrat\n");
            break;
        case 11:
            printf("goat\nox\n");
            break;
    }
    return 0;
}