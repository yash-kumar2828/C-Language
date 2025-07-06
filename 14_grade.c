#include<stdio.h>
int main(){
    int marks;
    char grade;
    printf("enter your marks=");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90){
        grade='A';
        printf("grade is=%c",grade);
    }else if(marks<=90 && marks>=80){
        grade='B';
        printf("grade is=%c",grade);
    }else if(marks<=80 && marks>=70){
        grade='C';
        printf("grade is=%c",grade);
    }else if(marks<=70 && marks>=60){
        grade='D';
        printf("grade is=%c",grade);
    }else if(marks<=60 && marks>=50){
        grade='A';
        printf("grade is=%c",grade);
    }if(marks<50){
        grade='F';
        printf("grade is=%c",grade);
    }else{
        printf("invalid marks");
    }
    return 0;
}