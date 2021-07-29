/*
    Sorting: Merge Sort method

    Merge and sort two different and alreadys sort arrays into one array

    O(n log n) efficient

    Vanessa Jaime 

    27/07/2021

*/

#include <stdio.h>

void print_array(int how_many, int data[], char *str)
{
    printf("%s", str);
    for (int i=0; i<how_many; i++)
        printf("%d  ", data[i]);
    printf("\n\n");

}

void merge( int a[], int b[], int c[], int how_many)
//a and b same size
{
    int i = 0, j = 0, k = 0;
    
    while(i<how_many && j<how_many)
        if(a[i] < b[j])
            c[k++]= a[i++];
        else
            c[k++]=b[j++];
    while(i<how_many)
        c[k++] = a[i++];
    while(j<how_many)
        c[k++] = b[j++];
    
}

int main (void)
{
    const int SIZE = 5; 
    int gradesA[5]= {55,60,82,95,99}; //dk why doesnt work with size between brackets
    int gradesB[5]= {52,75,83,89,94}; //dk why doesnt work with size between brackets
    int all_grades[2*SIZE];
    print_array(SIZE, gradesA, "My grades are: ");
    print_array(SIZE, gradesB, "More grades: ");
    merge(gradesA, gradesB, all_grades, SIZE);
    print_array(2*SIZE, all_grades, "All my grades sorted are: ");

    return 0;
}