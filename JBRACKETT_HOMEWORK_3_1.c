// Include
#include <stdio.h>
#include <stdlib.h>
// Define
#define FALSE 0
#define TRUE 1

int main(){
	char user_char;
	int exit = FALSE;
	while(exit == FALSE){
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
		else{
			printf("\n\nYou didn't enter a letter of the alphabet, please try again.\n");

		}
	}
	return 0;
}

