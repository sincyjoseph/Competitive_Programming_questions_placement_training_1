#include<stdio.h>
#include<conio.h>

void main()
{
    //Author : Sincy Joseph
    //Purpose: To read a number and print multiplication table

    //Variable declaration
    int input, i;

    //Read data from user
    printf("Enter any number: ");
    scanf("%d", &input);

    //Logic
    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n", input, i, input * i);
    }
    getch(); 
}