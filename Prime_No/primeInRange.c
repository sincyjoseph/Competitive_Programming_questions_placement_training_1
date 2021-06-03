#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

//Author: Sincy Joseph
//Purpose: Prime number in a given range a,b

bool isPrimeNumber(int input);

void main(){
    //Variable declaration
    int a, b, i;

    //Input from user
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);

    for(i = a; i <= b; i++){
        if(isPrimeNumber(i)){
            printf("%d ,",i);
        }
    }
    getch;
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
