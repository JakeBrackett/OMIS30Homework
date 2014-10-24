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
    int user_end = FALSE, int user_Y = TRUE, char run_again, int score, int num_scores, int average;
    printf("This program allows you to enter a list of scores to find the average score. It will ask you for each score one by one.\n Please Enter -99 when all scores have been entered.")
    PAUSE;
    CLEAR;
    while(user_Y == TRUE){
        while (user_end == FALSE) {
            printf("Enter a test score: ");
            scanf("%d", &score);
            getchar();
	    if(score == -99){
		printf("The average test score is %d\nWould you like to start again?(Y/N): ", average);
		scanf("%c", &run_again);
		getchar();
		while(run_again != 'Y' || 'y' || 'N' || 'n')
			printf("You must enter Y or N. Would you like to continue?(Y/N): ");
			scanf("%c", &run_again);
			getchar();
		if(run_again == 'N' || 'n')
			user_Y = FALSE;
            average = ((average/num_scores) + score)/(num_scores+1);
            ++num_scores;
        }
    }
    
    
    
    
}

