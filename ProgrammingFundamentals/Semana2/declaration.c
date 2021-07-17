/* 
    Fundamental Types of Declaration and Assigment
    Vanessa Jaime

    16/07/2021

*/

#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 6; //declare and initialize
    double average = 0.0; //not need of initialize but good practice

    printf("a = %d, b = %d, c = %d\n", a,b,c); //%d = decimal integer

    average = (a + b + c)/3.0; // int/double = double if int/int = int
    printf("average = %lf\n", average); //%lf long double

    return 0; 

}
