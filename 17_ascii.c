#include<stdio.h>
int main(){
    char ch='Y';
    printf("the value of character is %d\n",ch);
    if(ch>=97 && ch<=122){
        printf("this is a lower case");
    }else{
        printf("this is not a lower case");
    }
    return 0;
}