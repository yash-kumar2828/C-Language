#include<stdio.h>
int main(){
    int num,not_prime=0,i;
    printf("enter a number=");
    scanf("%d",&num);
    if(num==0 || num==1){
        not_prime=1;
    }
    else{
        for(i=2;i<num;i++){
            if(num%i==0){
                not_prime=1;
                break;
            }
        }
    }
    if(not_prime){
        printf("%d is not prime number",num);
    }else{
        printf("%d is prime number",num);
    }
    return 0;
}