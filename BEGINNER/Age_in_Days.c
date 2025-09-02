#include<stdio.h>
int main(){
    int Days;
    scanf("%d",&Days);
    int Year=Days/365;
    int rem=Days%365;
    int Month=(rem/30);
    int days=rem%30;
    printf("%d ano(s)\n",Year);
     printf("%d mes(es)\n",Month);
      printf("%d dia(s)\n",days);



}

