#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=4,b=7;
    printf("after swapping the value of a is =%d\n",a);
    printf("after swapping the value of b is =%d\n",b);
    swap(a,b);
    printf("before swapping the value of a is =%d\n",a);
    printf("before swapping the value of b is =%d\n",b);
    return 0;
}