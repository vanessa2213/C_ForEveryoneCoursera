/* 
    If and Relations and flow of control
    Vanessa Jaime

    19/07/2021

*/

#include <stdio.h>

int main(void)
{
    int speed;
    printf("\nEnter your speed as an integer in MpH: ");
    scanf("%d", &speed);
    if(speed <65)
        printf("\nNo speeding Ticket\n\n");
    else
        printf("\nSpeeding Ticket\n\n");
    return 0;
}