#include<stdio.h>
int main(){
    int marks[]={91,98,89,79};
    int* ptr=marks;
    for (int i = 0; i < 4; i++)
    {
        printf("the marks at index %d is %d\n",i,marks[i]);
        printf("the marks at index %d is %d\n",i,*ptr);
    }
    
    return 0;
}