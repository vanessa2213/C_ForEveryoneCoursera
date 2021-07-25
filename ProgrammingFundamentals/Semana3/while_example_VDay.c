/*
    Vanessa Jaime 
    Demonstrate loop with while Valentines Day

    19/07/2021

*/

#include <stdio.h>

int main(void)
{
    int repeat = 0;
    printf("How strong is your love 1-10? ");
    scanf("%d", &repeat);
    printf("\nI love you very ");
    while(repeat>1)
    {
        printf("very ");
        repeat--;
    };
    printf("much.\n\n");
    return 0;
}