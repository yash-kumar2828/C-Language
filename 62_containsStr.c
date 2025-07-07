#include<stdio.h>
#include<string.h>
int main(){
    char str[]="my name is yash kumar";
    int contain=0;
    char c='a';
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]==c){
            contain=1;
            break;
        }
    }
    if(contain){
        printf("yes it contain");
    }else{
        printf("does not contain");
    }
    return 0;
}