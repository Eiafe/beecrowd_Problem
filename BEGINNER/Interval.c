#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if(0<25.00){
        printf("Intervalo [0,25]");
    }
    else if(25.01<=99.99){
        printf("Intervalo (25,50]");
    }
    else if(100<=100){

        printf("Intervalo (75,100]");
    }
    else{
        printf("Fora de intervalo");
    }
}
