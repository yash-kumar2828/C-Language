#include<stdio.h>
int fact(int);
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

int main(){
    int num;
    printf("enter a number=");
    scanf("%d",&num);
    printf("the factorial of %d is %d",num,fact(num));
    return 0;
}