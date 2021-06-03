//Program to find the factorial of number without using function
//program 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i, factorial = 1;
    printf("Enter the number: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++){
        factorial = factorial * i;
    }
    printf("The factorial of the number %d is: %d", number, factorial);
}


/*  //Program to find the factorial of number without using function
    //program 2
#include <stdio.h>
#include <stdlib.h>
int findFactorial(int);
int main()
{
    int number, factorial;
    printf("Enter the number: ");
    scanf("%d", &number);
    factorial = findFactorial(number);
    printf("The factorial of the number %d is: %d", number, factorial);
}
int findFactorial(int number){
    int i, factorial=1;
    for(i = 1; i <= number; i++){
        factorial = factorial * i;
    }
    return factorial;
}
*/


