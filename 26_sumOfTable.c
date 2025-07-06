#include<stdio.h>
int main(){
    int num,i=1,sum=0;
    printf("enter any number=");
    scanf("%d",&num);
    printf("the table of %d\n",num);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",num,i,num*i);
    }
    for(i=1;i<=10;i++){
        sum=sum+(8*i);
    }
    printf("the sum of the table of %d is %d",num,sum);
    return 0;
}