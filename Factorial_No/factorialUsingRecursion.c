#include<stdio.h>
#include<conio.h>

//Author : Sincy Joseph
//Purpose: To read a number and print its factorial using recursion

int Factorial(int input);                //Function declaration

void main() {
    //Variable declaration
    int input;

    //User input
    printf("Enter the first number: ");
    scanf("%d",&input);
   
    //Print the Result
    printf("Factorial of %d is %d\n", input, Factorial(input));
    getch;
}

//Function definitiom
int Factorial(int input){       
    if(input == 0){
        return 1;
    } else {
        return input * Factorial(input - 1);
    }
}