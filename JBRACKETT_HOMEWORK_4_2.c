//
//  JBRACKETT_HOMEWORK_4_2.c
//  
//
//  Created by Jacob Brackett on 11/11/14.
//
//

#include <stdio.h>


int number_print(int number);

int main(){
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    number_print(number);
    return 0;
}

int number_print(number){
    printf("\nYou entered %d.\n", number);
    return 0;
}