#include<stdio.h>
#include<conio.h>

//Author : Sincy Joseph
//Purpose: To read a number and print its factorial

void main() {
    //Variable declaration
    int input, i, fact = 1;

    //User input
    printf("Enter the number: ");
    scanf("%d",&input);

    //Logic
    for(i = 1; i <= input; i++){
        fact = fact * i;
    }

    //Print the Result
    printf("Factorial of %d is %d", input, fact);
    getch;
}

