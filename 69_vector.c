#include<stdio.h>
struct vector{
    int i;
    int j;
};
int main(){
    struct vector v;
    v.i=1;
    v.j=2;
    printf("the two dimensional vector is %di + %dj",v.i,v.j);
    return 0;
}