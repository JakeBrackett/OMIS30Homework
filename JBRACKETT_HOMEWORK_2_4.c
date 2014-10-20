#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char char1, char2;
	printf("Please enter a character: ");
	scanf("%c", &char1);
	printf("Please enter another character: ");
	getchar();
	scanf("%c", &char2);
	// if char1 is lowercase||UPPERCASE  ||  char2 is lowercase||UPPERCASE
	if(((char1>='a'&&char1<='z')||(char1>='A'&&char1<='Z'))||((char2>='a' && char2<='z')||(char2>='a'&&char2<='z')))
		printf("At least of of your characters is a letter of the alphabet!\n\n");
	else
		printf("Neither of your characters are letters of the aplhabet.\n\n");
	return 0;
}
