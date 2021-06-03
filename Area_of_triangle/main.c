//Program to find the area of triangle
// sides:a,b,c
// area = rootof(s(s-a)(s-b)(s-c))
// s=(a+b+c)/2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c,s,area;
    printf("Enter the length of sides of the triangle: \n");
    scanf("%lf %lf %lf", &a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle is: %.2lf \n", area);

}
