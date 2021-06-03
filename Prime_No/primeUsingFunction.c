#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

//Author: Sincy Joseph
//Purpose: To read a number and check if it is prime or not using function

bool isPrimeNumber(int input);

void main(){
    //Variable declaration
    int input, i;

    //Input from user
    printf("Enter any number: ");
    scanf("%d",&input);

    if(isPrimeNumber(input)){
        printf("%d is prime number", input);
    } else {
        printf("%d is not prime number", input);
    }
}

bool isPrimeNumber(int input){
    int i;
    for(i = 2; i < input; i++){
        if(input % i == 0){
            break;
        }
    }
    if(i == input){
        return true;
    } else {
        return false;
    }
}
