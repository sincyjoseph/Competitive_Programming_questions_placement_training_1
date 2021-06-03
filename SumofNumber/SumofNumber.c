#include<stdio.h>
#include<conio.h>

//Author : Sincy Joseph
//Purpose: To read a number and print sum of n natural numbers upto n.

void main(){
    int input, i, sum = 0;

    printf("Enter the number: ");
    scanf("%d",&input);

    for(i = 1; i <= input; i++){
        sum = sum + i;
    }

    printf("Sum of %d natural number: %d", input, sum);
}