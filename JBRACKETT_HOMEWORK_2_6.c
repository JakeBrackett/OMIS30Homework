#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	// GET USER DATA
	char gender,smoker;
	int age;
	// Get Gender, check for correct entry
	printf("Are you male or female(M/F): ");
	scanf("%c",&gender);
	getchar();
	gender = toupper(gender);
	if(gender != 'M' && gender != 'F'){
		printf("You must enter 'M' or 'F'\n\nPlease start over\n");
		return 0;
	}
	// Get age
	printf("What is your age?: ");
	scanf("%d", &age);
	getchar();
	if(age > 90)
		printf("You are very old! You may continue, but the program may not give you helpful information.\n");
	// Find out if the user smokes
	printf("Are you a smoker?(Y/N): ");
	scanf("%c", &smoker);
	smoker = toupper(smoker);
	if(smoker != 'Y' && smoker != 'N'){
		printf("You must enter 'Y' or 'N'\n\nPlease start over\n");
		return 0;
	}
	// PARSE INFORMATION BASED ON TABLE
	int life_expect;
	if(age<18){
		if(gender == 'M'){
			if(smoker == 'Y')
				life_expect = 65;
			else  /*(Male non-smoker)*/
				life_expect = 75;
			}
		else{ /*(Female)*/
			if(smoker == 'Y')
				life_expect = 68;
			else /*Female non-smoker*/
				life_expect = 78;
			}
		}
	else if(age>=18 && age<=45){
		if(gender == 'M'){
			if(smoker == 'Y')
				life_expect = 63;
			else /*Male non-smoker*/
				life_expect = 78;
			}
		else{ /*Female*/
			if(smoker == 'Y')
				life_expect = 63;
			else /*Female non-smoker*/
				life_expect = 81;
			}
		}
	else{ /*age > 45*/
		if(gender == 'M'){
			if(smoker == 'Y')
				life_expect = 61;
			else /*male non-smoker*/
				life_expect = 79;
			}
		else{ /*Female*/
			if(smoker == 'Y')
				life_expect = 60;
			else /*Female non-smoker*/
				life_expect = 84;
			}
		}
	// Evaluate whether you have outlived your life expectancy
	if(age>life_expect)
		printf("Your life expectancy is %d\n", age);
	else
		printf("Your life expectancy is %d\n", life_expect);
	return 0;
}
