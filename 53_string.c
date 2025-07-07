#include<stdio.h>
int main(){
     char str[]={'y','a','s','h','\0'};
     char str2[]="kumar";
     for (int i = 0; i < 4; i++)
     {
        printf("the character is %c\n",str[i]);
     }

      for (int i = 0; i < 4; i++)
     {
        printf("the character is %c\n",str2[i]);
     }
    return 0;
}