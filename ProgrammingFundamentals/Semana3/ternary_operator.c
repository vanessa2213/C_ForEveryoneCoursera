/*
    Vanessa Jaime 
    Ternary operator and flow control

    22/07/2021

*/

#include <stdio.h>

int main(void)
{
    int speed;
    printf("\nEnter your speed as an integer:");
    scanf("%d", &speed);
    speed = (speed <= 65) ? (65) : (speed<=70)? (70):(90);
    switch(speed)
    {
        case 65: printf("\nNo speeding Ticket\n\n"); break;
        case 70: printf("\nSpeeding Ticket\n\n"); break;
        case 90: printf("\nExpensive speeding Ticket\n\n"); break;
        default: printf("\nIncorrect speed, please try again\n\n"); break;
    }
    return 0;

}