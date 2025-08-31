#include<stdio.h>
int main(){
    int a,b;
    float c;
    int x,y;
    float z;
    scanf("%d %d %f",&a,&b,&c);
    scanf("%d %d %f",&x,&y,&z);
    float Amount=(b*c)+(y*z);
    printf("VALOR A PAGAR: R$ %.2f",Amount);


}


