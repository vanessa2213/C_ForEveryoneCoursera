/*
    Use of Simple Arrays
    Vanessa Jaime 

    26/07/2021

*/

#include <stdio.h>

int main(void)
{
    const int SIZE = 5; 
    int grades[5]= {78, 67,92,83,88}; //dk why doesnt work with size between brackets
    double sum;

    printf("\nMy grades are: ");
    for(int i = 0; i<SIZE; i++)
        printf("%d ",grades[i]);
    printf("\n\n");

    for(int i = 0; i<SIZE; i++)
        sum = sum + grades[i];
    
    printf("My average is: %0.2f\n\n", sum/SIZE);
    return 0;

}