//
//  JBRACKETT_HOMEWORK_4_3.c
//  
//
//  Created by Jacob Brackett on 11/11/14.
//
//

#include <stdio.h>

int computeAverage(int n1, int n2, int n3);

int main(){
    int n1, n2, n3;
    printf("Please enter a number: ");
    scanf("%d", &n1);
    getchar();
    printf("Please enter a number: ");
    scanf("%d", &n2);
    getchar();
    printf("Please enter a number: ");
    scanf("%d", &n3);
    getchar();
    printf("The average of %d, %d, and %d is %d\n", n1, n2, n3, computeAverage(n1, n2, n3));
    return 0;
}

int computeAverage(n1, n2, n3){
    return ((n1+n2+n3)/3);
}