//
//  JBRACKETT_HOMEWORK_4_4.c
//  
//
//  Created by Jacob Brackett on 11/11/14.
//
//

#include <stdio.h>

int find_area(int length, int width);

int main(){
    int length, width, area;
    printf("This program will compute the area of a rectangle.\n\nPlease enter the width of your rectangle: ");
    scanf("%d", &width);
    getchar();
    printf("Enter the length: ");
    scanf("%d", &length);
    area = find_area(length, width);
    printf("The area of the rectangle is %d\n", area);
}

int find_area(length, width){
    int area;
    area = (length * width);
    return area;
}