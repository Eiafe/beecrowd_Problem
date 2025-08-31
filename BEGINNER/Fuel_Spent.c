#include<stdio.h>
int main(){
    int a,b;

    scanf("%d %d",&a,&b);
    float fuel=(b/12.0)*a;
    printf("%.3f\n",fuel);

}
