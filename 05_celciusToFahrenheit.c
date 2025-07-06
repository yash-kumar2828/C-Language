#include<stdio.h>
int main(){
    float c,f;
    printf("enter a celcius=");
    scanf("%f",&c);
    f=((9.0/5.0)*c+32);
    printf("the value in fahrenheit is=%f",f);
    return 0;
}