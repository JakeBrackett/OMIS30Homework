//
//  JBRACKETT_HOMEWORK_3_4.c
//
//
//  Created by Jacob Brackett on 10/24/14.
//
//

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("read -n 1 -s -p \"Press any key to continue...\"; echo") /*This a way to mimic the behavior of the windows pause command on mac*/
#define CLEAR system("clear")
#define TRUE 1
#define FALSE 0

int main(){
    // Problem 4.  Write a program using either a while or do-while loop that will prompt the user for the scores in a test and then compute the average score.  The program should instruct the user to enter the value –99 when all scores are entered.  .  Once the average is computed, the program must ask the user if he or she wants to enter another set of scores (Y or N).  The code must repeat if the user enters a ‘Y’ or ‘y’ (uppercase or lowercase ‘Y’).  The program must also error check and require the user to enter a Y or N; it must display an error message if the user enters a value other than Y or N and redisplay the prompt.
    int user_end = FALSE, user_Y = TRUE, enter_scores, sum = 0, score, num_scores = 0;
    char run_again;
    double average = 0;
    printf("This program allows you to enter a list of scores to find the average score. It will ask you for each score one by one.\nHow many scores are you going to enter?: ");
    scanf("%d", &enter_scores);
    PAUSE;
    CLEAR;
    while(user_Y == TRUE){
        while (user_end == FALSE) {
            ++num_scores;
            printf("Enter a test score: ");
            scanf("%d", &score);
            getchar();
            if(enter_scores == num_scores){
                printf("The average of your scores is %lf\n", average);
                user_end = TRUE;
            }
            average = (double)((sum + score)/(num_scores));
            sum = sum + score;
        }
        printf("Would you like to start again?(Y/N): ");
        scanf("%c", &run_again);
        getchar();
        while (run_again != 'Y' && run_again != 'N' && run_again != 'n' && run_again != 'y') {
            printf("You must enter either Y or N. Would you like to run this program again(Y/N): ");
            scanf("%c", &run_again);
            getchar();
        }
        // The user wants to continue, so restart the while loop and reset average.
        if(run_again == 'Y' || run_again == 'y'){
            user_end = FALSE;
            average = 0;
            sum = 0;
            num_scores = 0;
        }
        // The user answered N, so exit the program
        else{
            user_Y = FALSE;
            break;
        }
    }
    
    
    
    
}

