#include<stdio.h>
int main(){
    int arr[10];
    int n;
    printf("enter a number=");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        arr[i]=n*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the value of %d X %d=%d\n",n,i+1,arr[i]);
    }
    
    return 0;
}