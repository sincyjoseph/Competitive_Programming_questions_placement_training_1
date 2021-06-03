#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

//Author: Sincy Joseph
//Purpose: To read a number and check if it is armstrong number or not using function

//function declaration
bool isArmstrong(int n);

void main(){

    //Variable declaration
    int n;

    //Input from user
    printf("Enter the number: ");
    scanf("%d", &n);
    
    //Logic
    //Function call
    if(isArmstrong(n)){
        printf("%d is Armstrong Number",n);
    } else {
        printf("%d is Not Armstrong Number",n);
    }
    getch;
}

//Function defintion
bool isArmstrong(int n){
    int m, rem, result = 0;
    m = n;
    while (m > 0)
    {
        rem = m % 10;
        m = m / 10;
        result = result + rem*rem*rem;
    }

    // return (result==n) ? true : false;
    if(result == n){
        return true;
    } else {
        return false;
    }
}