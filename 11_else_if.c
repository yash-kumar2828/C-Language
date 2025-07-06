#include<stdio.h>
int main(){
    int age;
    printf("enter age=");
    scanf("%d",&age);
    if(age>=18 && age<=39){
        printf("you can drive");
    }else if(age>=40 && age<=59){
        printf("you can drive and you are elder");
    }else if(age>=60){
        printf("you can drive and you are a senior citizen");
    }else{
        printf("you can not drive");
    }
    return 0;
}