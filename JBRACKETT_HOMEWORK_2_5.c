#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char input;
	
	printf("\n\n\n\n *** Homework No. 5 Menu ***\n\n");
	printf("A. Choice A;\nB. Choice B;\nC. Choice C;\nD. Choice D;\nE. Choice E;\nX. Exit.\n\n");
	printf("Please Enter a Choice From the Menu: ");
	scanf("%c", &input);
	input = toupper(input);
	switch(input){
		case 'A':
			printf("You chose A.\n\n");
			break;
		case 'B':
			printf("You chose B.\n\n");
			break;
		case 'C':
			printf("You chose C.\n\n");
			break;
		case 'D':
			printf("You chose D!\n\n");
			break;
		case 'E':
			printf("You chose E.\n\n");
			break;
		case 'X':
			printf("You chose to exit.\n\n");
			break;
		default:
			printf("You must choose from the menu.\n");
			break;
	}		
	return 0;
}
