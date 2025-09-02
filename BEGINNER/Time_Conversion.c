#include<stdio.h>
int main(){
    int sec;
    scanf("%d",&sec);
    int hour=sec/3600;
    int Minite=sec%3600/60;
    int Secound=sec%60;
    printf("%d:%d:%d\n",hour,Minite,Secound);

}
