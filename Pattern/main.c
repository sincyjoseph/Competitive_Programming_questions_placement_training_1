//Program to print different pattern
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k = 1;

   // Pattern 1 - Wedge
    printf("Pattern 1 - Wedge \n\n");
    for(i = 1; i <= 5; i++){                        //raw logic
        for(j = 1; j <= i; j++){                    //coloum logic/print logic
            printf("%d \t", 1);
        }
        printf("\n");
    }

    /*  // Pattern 2 - Pyramid
    printf("Pattern 2 - Pyramid \n\n");
    for(i = 10; i > 0; i = i-2){                        //raw logic
        for(j = i; j >= 0; j--){                     //space logic
            printf(" ");
        }
        for(j = k; j > 0; j--){                     //print logic
            printf("%d ", 1);
        }
        k = k + 2;
        printf("\n");
    }   */

    // Pattern 2 - Pyramid
    printf("Pattern 3 - Diamond \n\n");
    for(i = 10; i > 0; i = i-2){                        //raw logic
        for(j = i; j >= 0; j--){                     //space logic
            printf(" ");
        }
        for(j = k; j > 0; j--){                     //print logic
            printf("%d ", 1);
        }
        k = k + 2;
        printf("\n");
    }
    k = 7;
    for(i = 4; i <= 10; i = i+2){
        for(j = i; j >= 0; j--){                     //space logic
            printf(" ");
        }
        for(j = k; j > 0; j--){                     //print logic
            printf("%d ", 1);
        }
        k = k - 2;
        printf("\n");
    }

}


/*    //Output - Pattern 1 - Wedge
        1
        1       1
        1       1       1
        1       1       1       1
        1       1       1       1       1
    //Output - Pattern 1 - Pyramid
                   1
                 1 1 1
               1 1 1 1 1
             1 1 1 1 1 1 1
           1 1 1 1 1 1 1 1 1
    //Output - Pattern 1 - Diamond
                   1
                 1 1 1
               1 1 1 1 1
             1 1 1 1 1 1 1
           1 1 1 1 1 1 1 1 1
             1 1 1 1 1 1 1
               1 1 1 1 1
                 1 1 1
                   1                                    */
