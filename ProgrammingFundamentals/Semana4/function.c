/*
    Vanessa Jaime 
    Demostration of a function

    24/07/2021

*/

#include <stdio.h>

void write_very(int count)
{
    while(count>1)
    {
        printf("very ");
        count--;
    }
    printf("much.\n\n");
}


int main(void)
{
    int repeat = 0;
    printf("How strong is your love 1-10? ");
    scanf("%d", &repeat);
    printf("\nI love you very ");
    write_very(repeat);
    return 0;

}