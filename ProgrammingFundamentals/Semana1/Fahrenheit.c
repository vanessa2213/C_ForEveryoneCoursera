/*
    Conversion of Fahrenheit to Celsius
    C = (F-32)/1.8

    Vanessa Jaime
    13/07/2021

*/
#include <stdio.h>

int main(void)
{
    int fahrenheit, celsius;

    printf("Please enter fahrenheit as an integer: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32)/1.8;
    printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);

    return 0; 

}
