#include<stdio.h>
int main(){
    int num;
    printf("enter a number=");
    scanf("%d",&num);
    if(num==5){
        printf("the number is equal to five");
    }else if(num>5){
        printf("the number is greater than five");
    }else if(num<5){
        printf("the number is less than five");
    }else{
        printf("the number is invalid");
    }
    return 0;
}