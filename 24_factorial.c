#include<stdio.h>
int main(){
    int fact=1,num,i=1;
    printf("enter number=");
    scanf("%d",&num);
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("the factorial of %d is %d",num,fact);
    return 0;
}