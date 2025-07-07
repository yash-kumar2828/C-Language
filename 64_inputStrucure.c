#include<stdio.h>
#include<string.h>
struct student{
    int age;
    float fee;
    char name[];
};
int main(){
    struct student s1;
    printf("enter age=");
    scanf("%d",&s1.age);
    printf("enter fee=");
    scanf("%f",&s1.fee);
    printf("enter name=");
    scanf("%s",&s1.name);
    printf(" student age is %d\n",s1.age);
    printf(" student fee is %f\n",s1.fee);
    printf(" student name is %s\n",s1.name);
   
    return 0;
}