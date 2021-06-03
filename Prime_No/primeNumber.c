#include<stdio.h>
#include<conio.h>

//Author: Sincy Joseph
//Purpose: To read a number and check if it is prime or not

void main(){
    //Variable declaration
    int input, i, count = 0;

    //Input from user
    printf("Enter any number: ");
    scanf("%d",&input);

    //Logic
    for(i = 2; i < input; i++){
        if(input % i == 0){
            break;
        }
    }

    //Print output
    if(i == input){
        printf("%d is prime number",input);
    } else {
        printf("%d is not prime number",input);
    }
    getch;
}
