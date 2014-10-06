//
//  JBRACKETT_HOMEWORK_1_3.c
//  OMIS30
//
//  Created by Jacob Brackett on 10/5/14.
//  Copyright (c) 2014 Jacob Brackett. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause")
#define CLS system("cls")
#define TRUE 1
#define FALSE 0

int main(void){
    int a, b, c, d;
    printf("Enter the lowest grade required for an A: ");
    scanf("%d", &a);
    printf("Enter the lowest grade required for a B: ");
    scanf("%d", &b);
    printf("Enter the lowest grade requred for a C: ");
    scanf("%d", &c);
    printf("Enter the lowest grade requred for a D: ");
    scanf("%d", &d);
    CLS;
    printf("The following table shows the score you must achieve to get the corresponding grade: \n\n Grade\t\t Score \n A \t\t %d \n\n B \t\t %d \n\n C \t\t %d \n\n D \t\t %d", a,b,c,d);
    return 0;
}