#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("70_yash.txt","a");
    int num=76;
    fprintf(fptr,"\n%d",num);
    fclose(fptr);
    return 0;
}