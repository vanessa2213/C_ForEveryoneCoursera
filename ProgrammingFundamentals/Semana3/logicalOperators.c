/* 
    Logical operators and short circuit evaluation
    Vanessa Jaime

    19/07/2021

*/

#include <stdio.h>

int main(void)
{
    int outside, weather;
    printf("\nEnter if outside: 1 true and 0 false: ");
    scanf("%d", &outside);
    printf("\nEnter if rain: 1 true and 0 false: ");
    scanf("%d", &weather);
    if(outside && weather)
        printf("\nPlease use an umbrella.\n");
    else
        printf("\nDress normally\n");
    return 0;
}