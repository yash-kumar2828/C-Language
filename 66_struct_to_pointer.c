#include<stdio.h>
#include<string.h>
struct student{
    int age;
    float fee;
    char name[];
};
int main(){
    struct student s1;
    s1.age=20;
    s1.fee=55000.5;
    struct student *ptr;
    ptr=&s1;
    printf("student age is %d\n",(*ptr).age);
    printf("student fee is %f\n",(*ptr).fee);    
    return 0;
}