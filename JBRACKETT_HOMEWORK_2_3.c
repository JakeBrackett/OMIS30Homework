#include <stdio.h>
#include <stdlib.h>

int main(){
	char user_char;
	printf("Please enter a character: ");
	scanf("%c", &user_char);
	if(user_char >= 'A' && user_char <= 'Z')
		printf("%c is a capital letter\n", user_char);
	else if(user_char >= 'a' && user_char <= 'z')
		printf("%c is a lowercase letter\n", user_char);
	else
		printf("%c is not a letter of the alphabet\n", user_char);
	return 0;
}
