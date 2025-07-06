#include<stdio.h>
float average(int a,int b, int c);
float average(int a,int b, int c){
    return (a+b+c)/3.0;
}
int main(){
    int x,y,z;
    printf("enter first number=");
    scanf("%d",&x);
    printf("enter second number=");
    scanf("%d",&y);
    printf("enter third number=");
    scanf("%d",&z);

    printf("the average of three number %f",average(x,y,z));
    return 0;
}