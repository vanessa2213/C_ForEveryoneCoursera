/*
    Use of Pointers
    Vanessa Jaime 

    27/07/2021

*/

#include <stdio.h>

int main(void)
{
    const int SIZE = 5;

    int grades[5]= {78, 67,92,83,88}; //dk why doesnt work with size between brackets
    double sum = 0.0;
    double *pointer_sum = &sum;     // pointer initilized = address of sum

    printf("\nMy grades are: ");
    for(int i = 0; i<SIZE; i++)
        printf("%d ",grades[i]);
    printf("\n\n");

    for(int i = 0; i<SIZE; i++)
        sum = sum + grades[i];
    printf("My average is: %0.2f\n\n", sum/SIZE);

    printf("Sum is at the adreess: %p, or %lu, and it's value is %lf.\n\n", 
            pointer_sum, pointer_sum, *pointer_sum);

    /*
        pointer_sum returns the address of sum
        *pointer_sum return the value of sum

    */        
    printf("Grades are at the address: %lu to %lu\n\n", 
            grades, grades+5);

    /*
        printing grades returns its address

    */
    return 0;

}