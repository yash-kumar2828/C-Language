#include<stdio.h>
int main(){
    int i=1,sum=0;
    for(i=1;i<=10;i++){
        sum=sum+i;
    }
    printf("the sum of first 10 natural numbers is %d",sum);
    return 0;
}