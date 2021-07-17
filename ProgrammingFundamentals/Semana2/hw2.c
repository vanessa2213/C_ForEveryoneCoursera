/*
Write a program that can give the sine of a value between 0 and 1 (non inclusive). 
You will be graded based on whether the program can output a value in the correct range 
and whether your code is well-formatted and logically correct.

Vanessa Jaime

17/07/2021

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    while(1)
    {
        double variable, sine_v;
        printf("Enter a number between 0 and 1:");
        scanf("%lf", &variable);
        if(variable >0 && variable < 1)
        {
            sine_v = sin(variable);
            printf("sine = %lf\n\n", sine_v);
            return 0;

        }
        printf("Your number is not between 0 and 1\n");
    }
    

}