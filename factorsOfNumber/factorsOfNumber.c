#include<stdio.h>
#include<conio.h>

//Author : Sincy Joseph
//Purpose: To read a number from user and find factors of number

void main(){
    //Variable declaration
    int input, i;

    //Input from user
    printf("Enter the number: ");
    scanf("%d",&input);

    //Logic
    for(i = 1; i <= input; i++){
        if(input % i == 0){
            printf("%d, ",i );
        } 
    }
    getch;
}