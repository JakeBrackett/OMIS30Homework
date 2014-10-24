//
//  JBRACKETT_HOMEWORK_3_3.c
//  
//
//  Created by Jacob Brackett on 10/20/14.
//
//

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("read -n 1 -s -p \"Press any key to continue...\"; echo") /*This a way to mimic the behavior of the windows pause command on mac*/
#define CLEAR system("clear")

int main(){
    int primary_1, primary_2, secondary_1, secondary_2, lines_to_print;
    printf("This program displays a series of numbers in the format 9.9.\nThe first number is referred to as the primary index and the second as the secondary index.\nThe indices can be set by the user.\n\n");
    PAUSE;
    CLEAR;
    printf("Enter the starting number for the primary index: ");
    scanf("%d", &primary_1);
    getchar();
    printf("Enter the ending number for the primary index: ");
    scanf("%d", &primary_2);
    getchar();
    printf("Enter the starting number for the secondary index: ");
    scanf("%d", &secondary_1);
    getchar();
    printf("Enter the ending number for the secondary index: ");
    scanf("%d", &secondary_2);
    getchar();
    printf("How many lines do you want displayed at once?: ");
    scanf("%d", &lines_to_print);
    CLEAR;
    int index1, index2, lines = 0;
    for (index1 = primary_1; index1 <= primary_2; ++index1) {
        for (index2 = secondary_1; index2 <= secondary_2; ++index2) {
            if(lines < lines_to_print){
                printf("%d.%d\n", index1, index2);
                ++lines;
            }
            else{
                PAUSE;
                CLEAR;
                printf("%d.%d\n", index1, index2);
                lines = 1;
            }
        }
    }
    return 0;
}

