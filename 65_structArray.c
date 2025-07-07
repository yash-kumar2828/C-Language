#include<stdio.h>
#include<string.h>
struct student{
    int age;
    float fee;
    char name[];
};
int main(){
    struct student s1[100];
    s1[0].age=20;
    s1[0].fee=20000;
    strcpy(s1[0].name,"yash kumar");
    printf("%d %f %s",s1[0].age,s1[0].fee,s1[0].name);    
    return 0;
}