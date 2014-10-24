// Include
#include <stdlib.h>
#include <stdio.h>

// Define
#define TRUE 1
#define FALSE 0

int main(){
    char user_char;
    int exit = FALSE;
    do {
        printf("Please enter a letter of the alphabet, or type ! to quit: ");
        scanf("%c", &user_char);
        if((user_char >= 'a' && user_char <= 'z') || (user_char >= 'A' && user_char >= 'Z')){
            printf("You entered %c\n", user_char);
            exit = TRUE;
        }
        else if(user_char == '!'){
            printf("Exiting Program...\n\n");
            exit = TRUE;
        }
        else
            printf("\n\nYou didn't enter a letter of the alphabet, please try again.\n");
        
    } while (exit == FALSE);
    
    
    return 0;
}

