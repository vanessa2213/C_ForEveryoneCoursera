/*
    Vanessa Jaime 
    Write a C program that has a function that prints a table of values for sine and cosine between (0, 1). 

    22/07/2021

*/


#include<stdio.h>
#include<math.h>

int main(void)
{ 
    printf("   x          sin(x)       cos(x)\n");
    double x_value, sine_value, cosine_value;
    for(int i = 0; i<=10; i++)
    {
        x_value = i/10.0;
        sine_value = sin(x_value);
        cosine_value = cos(x_value);
        printf("%f     %lf    %lf  \n",x_value,sine_value,cosine_value);
    }
    return 0;

}