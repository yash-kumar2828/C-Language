#include<stdio.h>
#include<string.h>
struct student{
    int age;
    float fee;
};

void show(struct student s1);
void show(struct student s1){
    printf(" student age is %d\n",s1.age);
    printf(" student fee is %f\n",s1.fee);
}
int main(){
    struct student s1,s2;
    s1.age=20;
    s1.fee=55000.5;
    show(s1);
    return 0;
}