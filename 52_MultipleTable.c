#include<stdio.h>
int main(){
    int arr[20][10];
    int mul[]={2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j]=mul[i]*(j+1);
        }
    }

     for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("the value of arr[i][j] is %d\n",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}