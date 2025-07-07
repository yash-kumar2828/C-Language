#include<stdio.h>
#include<string.h>
int main(){
    char str[]="nz!obnf!jt!zbti!lvnbs";
    printf("string is a=%s\n",str);
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]-1;
    }
    printf("the decrypt string is=%s",str);
    return 0;
}