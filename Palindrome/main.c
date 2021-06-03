//Program to check the given number is palindrome
/*An integer is a palindrome if the reverse of that number is equal to the original number*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, originalNumber, ReverseNumber = 0, lastDigit;
    printf("Enter the number: ");
    scanf("%d", &number);
    originalNumber = number;

    //step1: Reverse the number
    //To get last digit, reverse number, remaining number
    while(number != 0){
        lastDigit = number % 10;
        ReverseNumber = ReverseNumber*10 + lastDigit;
        number = number / 10;
    }
    //step2: Check for palindrome
    if(originalNumber == ReverseNumber)
        printf("The given number is palindrome");
    else
        printf("The given number is not palindrome");

}
