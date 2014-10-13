//
//  JBRACKETT_HOMEWORK_1_4.c
//  OMIS30
//
//  Created by Jacob Brackett on 10/5/14.
//  Copyright (c) 2014 Jacob Brackett. All rights reserved.
//

#include <stdio.h>
int main(void){
    printf("Please enter your first and last initials: ");
    char first, last;
    scanf("%c%c", &first, &last);
    printf("\nHello %c%c, welcome to the change calcualtor. Answer the following questions so that the calcualtor can let you know how much your change is worth!\n\n", first, last);
    int half_dollars, quarters, nickels, dimes, pennies;
    printf("How many half dollars do you have?: ");
    scanf("%d", &half_dollars);
    printf("How many quarters do you have?: ");
    scanf("%d", &quarters);
    printf("How many dimes do you have?: ");
    scanf("%d", &dimes);
    printf("How many nickels do you have?: ");
    scanf("%d", &nickels);
    printf("How many pennies do you have?: ");
    scanf("%d", &pennies);
    double change = (half_dollars*.5)+(quarters*.25)+(nickels*.05)+(dimes*.1)+(pennies*.01);
    printf("\nYou have $%lf worth of change\n", change);
    return 0;
}
