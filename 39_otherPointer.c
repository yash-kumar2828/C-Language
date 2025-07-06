#include<stdio.h>
int main(){
    char i='Y';
    char* j=&i;
    float k=5.232;
    float* k1=&k;
    printf("the address of i is %p\n",i);
    printf("the address of i is %u\n",i);
    printf("the address of i is %p\n",&i);
    printf("the address of i is %u\n",&i);
    printf("the address of i is %p\n",j);
    printf("the address of i is %u\n",j);

    printf("the value at address j is %c\n",*j);
    printf("the value at address j is %c\n",*(&i));

     printf("the value at address k is %f\n",*k1);
    printf("the value at address k is %f\n",*(&k));
    return 0;
}