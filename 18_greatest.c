#include<stdio.h>
int main(){
    int n1=1110,n2=112,n3=20,n4=99;
    if(n1>n2 && n1>n3 && n1>n4){
        printf("the greatest number is %d",n1);
    }else if(n2>n1 && n2>n3 && n2>n4){
        printf("the greatest number is %d",n2);
    }else if(n3>n1 && n3>n2 && n3>n4){
        printf("the greatest number is %d",n3);
    }else{
        printf("the greatest number is %d",n4);
    }
    return 0;
}