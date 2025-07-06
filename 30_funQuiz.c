#include<stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();


void goodMorning(){
    printf("good morning\n");
}
void goodAfternoon(){
    printf("good afternoon\n");
}
void goodNight(){
    printf("good night\n");
}
int main(){
    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}