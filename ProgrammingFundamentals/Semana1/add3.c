/* Read in three floats and print sum
    Vanessa Jaime
    13/07/2021
*/

#include <stdio.h>

int main(void){
    float a,b,c,sum;
    printf("Input three floats: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("a = %f, b = %f and c = %f\n", a,b,c);
    sum = a +b+ c;
    printf("sum = %f\n", sum);
    return 0;
}