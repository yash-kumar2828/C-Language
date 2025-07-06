#include<stdio.h>
int main(){
    int num,i=1;
    printf("enter any number=");
    scanf("%d",&num);
    printf("the table of %d\n",num);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}