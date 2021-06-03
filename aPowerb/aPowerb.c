#include<stdio.h>
#include<conio.h>

//Author : Sincy Joseph
//Purpose: To read a, b values and print a power b value

void main(){

    //Variable declaration
    int a, b, result = 1, i;

    //Input from user
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d",&b);

    //Logic
    for(i = 1; i <= b; i++){
        result = result * a;
    }

    printf("%d power %d = %d", a, b, result);
    getch;
}
