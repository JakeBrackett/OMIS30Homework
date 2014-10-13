#include <stdio.h>
#include <stdlib.h>


//Ask the user to enter any number, including zero, and tell the user that the number is either positive, negative or zero.  You must test the program by entering at least one positive and one negative number as well as zero.(pos_neg_zero.exe)

int main(){
    int user_int;
    printf("Enter any whole number: ");
    scanf("%d", &user_int);
    if(user_int == 0)
        printf("You entered 0\n\n");
    else if(user_int > 0)
        printf("You entered %d, a positive number\n\n", user_int);
    else
        printf("You entered %d, a negative number\n\n", user_int);
    return 0;
}
