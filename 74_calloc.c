#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int* ptr;
    printf("enter the size of array=");
    scanf("%d",&n);
    ptr=(int*)calloc(n, sizeof(int));
    ptr[0]=3;
    ptr[1]=2;
    ptr[2]=4;
    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    return 0;
}