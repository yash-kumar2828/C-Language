#include<stdio.h>
#include<string.h>
int main(){
    char str[]="my name is yash kumar";
    printf("string is a=%s\n",str);
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]+1;
    }
    printf("the encrypt string is=%s",str);
    return 0;
}