//Program to print the fibonacci series
// fibonacci series means the number = sum of last two numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i, first = 0, second = 1, third;
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    //fibonacci series
    for(i = 1; i <= number; i++){
        printf("%d \t",first);
        third = first + second;
        first = second;
        second = third;

    }
}
