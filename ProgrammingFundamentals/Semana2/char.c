/* 
    Char type in C
    Vanessa Jaime

    16/07/2021

*/

#include <stdio.h>

int main(void)
{
    
    char c = 'A';

    printf("c in ASCII is %d\n",c); 
    printf("c the character is %c\n", c); //%c is character
    printf("Three consecutive chars are: %c%c%c\n", c, c+1, c+2);
    printf("Three bell rings chars are: %c%c%c\n", '\a', '\a', '\a');

    return 0; 

}