#include<stdio.h>
int NaturalSum(int);
int NaturalSum(int num){
    if(num==1){
        return 1;
    }else{
        return NaturalSum(num-1)+num;
    }
}
int main(){
    int n;
    printf("enter a number=");
    scanf("%d",&n);
    printf("the sum of natural number=%d",NaturalSum(n));
    return 0;
}