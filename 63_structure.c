#include<stdio.h>
#include<string.h>
struct student{
    int age;
    float fee;
    char name[];
};
int main(){
    struct student s1,s2;
    s1.age=20;
    s1.fee=55000.5;
    strcpy(s1.name,"yash kumar");
    printf(" student age is %d\n",s1.age);
    printf(" student fee is %f\n",s1.fee);
    printf(" student name is %s\n",s1.name);
    s2.age=20;
    s2.fee=55000.5;
    strcpy(s2.name,"kalpana kumari");
    printf(" student age is %d\n",s2.age);
    printf(" student fee is %f\n",s2.fee);
    printf(" student name is %s\n",s2.name);
    return 0;
}