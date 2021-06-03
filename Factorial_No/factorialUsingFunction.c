#include<stdio.h>
#include<conio.h>

//Author : Sincy Joseph
//Purpose: To read a number and print its factorial using function

int Factorial(int input);                //Function declaration

void main() {
    //Variable declaration
    int fn, sn, tn;

    //User input
    printf("Enter the first number: ");
    scanf("%d",&fn);
    printf("Enter the second number: ");
    scanf("%d",&sn);
    printf("Enter the second number: ");
    scanf("%d",&tn);

    //Print the Result
    printf("Factorial of %d is %d\n", fn, Factorial(fn));
    printf("Factorial of %d is %d\n", sn, Factorial(sn));
    printf("Factorial of %d is %d\n", tn, Factorial(tn));
    getch;
}

//Function definitiom
int Factorial(int input){       
    int fact = 1, i;
    for(i = 1; i <= input; i++){
        fact = fact * i;
    }
    return fact;
}