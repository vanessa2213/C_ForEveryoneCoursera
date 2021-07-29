/*
    Sorting: Bubble Sort method

    Inefficient for large arrays

    O(n*n)efficient

    Vanessa Jaime 

    27/07/2021

*/

#include <stdio.h>

void swap(int *a, int *b)
{
    //we want a = b and b = a
    int temp = *a;  //creating temporal variable to store value of a
    *a = *b;        //then a is equal to b
    *b = temp;      //and b is equal to previous b
}

void print_array(int how_many, int data[], char *str)
{
    printf("%s", str);
    for (int i=0; i<how_many; i++)
        printf("%d\t", data[i]);
    printf("\n\n");

}

void bubble(int how_many, int data[])
{
    int go_on;
    for(int i = 0; i<how_many; i++)
    {
        //print_array(how_many, data, "\ninside bubble\n");
        //printf("i = %d, input any int to continue:", i);
        //scanf("%d", &go_on);        //not need it, just use it to hold the program
        for(int j = how_many-1; j>i; j--)
            if(data[j-1]> data[j])
                swap(&data[j-1],&data[j]);
    }

}

int main(void)
{
    const int SIZE = 5; 
    int grades[5]= {78, 67,92,83,88}; //dk why doesnt work with size between brackets
    
    print_array(SIZE, grades, "My grades are: ");

    bubble(SIZE, grades);
    print_array(SIZE, grades, "My sorted grades are: ");

    return 0;
}