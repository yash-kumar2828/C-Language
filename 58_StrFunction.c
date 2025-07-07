#include<stdio.h>
#include<string.h>
int main(){
    char str[]="yash";
    char str2[]="kumar";
    char name[11];
    printf("the length of string is =%d\n",strlen(str));


    strcpy(name,str);
    printf("the copy of another string=%s\n",name);

    strcat(str,str2);
    printf("two string is merge=%s\n",str);

    int a=strcmp("yash","kumar");
    printf("strcmp is=%d",a);
    return 0;
}