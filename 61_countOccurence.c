#include<stdio.h>
#include<string.h>
int main(){
    char str[]="my name is yash kumar";
    int count=0;
    char c='a';
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]==c){
            count++;
        }
    }
    printf("number of word a is %d",count);
    return 0;
}