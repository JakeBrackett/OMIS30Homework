//
//  JBRACKETT_HOMEWORK_1_2.c
//  OMIS30
//
//  Created by Jacob Brackett on 10/5/14.
//  Copyright (c) 2014 Jacob Brackett. All rights reserved.
//

#include <stdio.h>
int main(void){
    printf("Enter three test scores seperated by a space: ");
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    double avg = (double)(a+b+c)/3;
    printf("The average of %d, %d, and %d is %f\n", a,b,c,avg);
    return 0;
}
