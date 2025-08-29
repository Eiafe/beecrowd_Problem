#include<bits/stdc++.h>
using namespace std ;
int main (){
    int a,b,c,big;
    cin>> a >> b >> c;

    if(a>b && a>c){
        big=a;
    }
    else if(b>c){
        big=b;
    }
    else{
        big=c;
    }
    cout<<big <<" eh o maior"<<endl;


}

