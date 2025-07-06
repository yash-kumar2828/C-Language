#include<stdio.h>
int main(){
    int num,i=1;
    printf("enter any number=");
    scanf("%d",&num);
    printf("the table of %d\n",num);
    while(i<=10){
        printf("%d*%d=%d\n",num,i,num*i);
        i=i+1;
    }
    return 0;
}