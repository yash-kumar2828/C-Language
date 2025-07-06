#include<stdio.h>
int main(){
    int i=72;
    int* j=&i;
    printf("the address of i is %p\n",i);
    printf("the address of i is %u\n",i);
    printf("the address of i is %p\n",&i);
    printf("the address of i is %u\n",&i);
    printf("the address of i is %p\n",j);
    printf("the address of i is %u\n",j);

    printf("the value at address j is %d\n",*j);
    printf("the value at address j is %d\n",*(&i));
    return 0;
}