//
//  JBRACKETT_HOMEWORK_4_5.c
//  
//
//  Created by Jacob Brackett on 11/13/14.
//
//

#include <stdio.h>
int get_factorial(int number);

int main(){
    int number, factorial;
    printf("This program computes the factorial of a number.\n\nPlease enter a number: ");
    scanf("%d", &number);
    getchar();
    factorial = get_factorial(number);
    printf("The factorial of %d is %d.\n", number, factorial);
}

int get_factorial(number){
    int factorial = 1;
    for (int ktr = 1; ktr <= number; ++ktr) {
        factorial = ktr * factorial;
    }
    return factorial;
}