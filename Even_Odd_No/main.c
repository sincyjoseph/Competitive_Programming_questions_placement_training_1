// To check the given number is even or odd

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    //check if the number is even or odd
    if(number % 2 == 0)
        printf("The number is even \n");
    else
    printf("The number is odd \n");
}
