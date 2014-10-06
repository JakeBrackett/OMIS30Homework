#include <stdio.h>

int main(void){
    printf("What is your name?: ");
    char name[30];
    gets(name);
    printf("Hello %s, welcome to OMIS 30!", name);
    return 0;
}