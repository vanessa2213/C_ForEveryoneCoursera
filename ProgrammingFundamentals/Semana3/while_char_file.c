/* 
    While loop with count
    Vanessa Jaime

    19/07/2021

*/

#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, letters = 0, others = 0;
    int c;  //use for the int value of the character
    while((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++blanks;
        else if(c >= '0' && c<= '9')
            ++digits;
        else if(c >= 'a' && c<='z' ||c >= 'A' && c<='Z' )
            ++letters;
        else   
            ++others;
    };
    printf("blanks = %d, digits = %d, letters = %d and others = %d\n\n",
            blanks, digits, letters, others);
    return 0;


}