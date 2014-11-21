//
//  JBRACKETT_HOMEWORK_4_6.c
//  
//
//  Created by Jacob Brackett on 11/13/14.
//
//

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("read -n 1 -s -p \"Press any key to continue...\"; echo") /*This mimics the behavior of the windows pause command on mac*/
#define CLEAR system("clear")
#define TRUE 1
#define FALSE 0

double get_perimeter(double length, double width);
double get_area(double length, double width);
char get_choice();

int main(){
    double length, width, calculation;
    char calc_choice;
    printf("This program can compute either the area or the perimeter of a rectangle.\n");
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    getchar();
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);
    getchar();
    calc_choice = get_choice();
    switch (calc_choice) {
        case 'a':
            calculation = get_area(length, width);
            printf("The area of your rectangle is %.2lf\n", calculation);
            break;
        case 'p':
            calculation = get_perimeter(length, width);
            printf("The perimeter of your rectangle is %.2lf\n", calculation);
            break;
    }
    return 0;
}
char get_choice(){
    char calc_choice;
    printf("Would you like to compute the [a]rea or the [p]erimeter?(a/p): ");
    scanf("%c", &calc_choice);
    getchar();
    switch (calc_choice) {
        case 'a':
        case'A':
            calc_choice = 'a';
            break;
        case 'p':
        case'P':
            calc_choice = 'p';
            break;
        default:
            printf("You must enter a or p. Try again.\n");
            get_choice();
    }
    return calc_choice;
}

double get_area(double length, double width){
    double calculation;
    calculation = length*width;
    return calculation;
}


double get_perimeter(double length, double width){
    double calculation;
    calculation = 2*length + 2*width;
    return calculation;
}





