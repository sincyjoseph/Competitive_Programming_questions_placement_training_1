// Program to check the given number is prime number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i, flag = 0;
    printf("Enter the number: ");
    scanf("%d", &number);

    //check if prime number or not
    for(i = 2; i < number/2; i++){
        if(number % i == 0){
            flag = 1;
            break;
        }
    }
    if(number == 1)
        printf("The number is either prime nor composite\n");
    else if(flag == 1)
        printf("The number is composite\n");
    else
        printf("The number is prime\n");

}
