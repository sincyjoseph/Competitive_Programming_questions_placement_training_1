#include<stdio.h>
#include<conio.h>

//Author: Sincy Joseph
//Purpose: To read a number and check if it is armstrong number or not

void main(){
    //Variable declaration
    int n, m, rem, result = 0;

    //Input from user
    printf("Enter the number: ");
    scanf("%d", &n);
    m = n;
    while (m > 0)
    {
        rem = m % 10;
        m = m / 10;
        result = result + rem*rem*rem;
    }

    if(result == n){
        printf("%d is Armstrong Number", n);
    } else {
        printf("%d is Not Armstrong Number", n);
    }
    getch;
}
