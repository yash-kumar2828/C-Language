#include<stdio.h>
// function prototype
int sum(int,int);


// function definition 
int sum(int x,int y){
    printf("the sum is %d\n",x+y);
    return x+y;
}
int main(){
    int a=10;
    int b=20;
    // function calling
    sum(a,b);    

    int c=101;
    int d=202;
    // function calling
    sum(c,d);    


    int e=104;
    int f=205;
    // function calling
    sum(e,f);    


    int g=103;
    int h=209;
    // function calling
    sum(g,h);    
    return 0;
}