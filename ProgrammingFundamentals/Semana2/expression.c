/*
    Expression Evaluation
    Vanessa Jaime 
    16/07/2021

*/
#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 0, d = 0; //initilization

    c = a - b; //5 - 7 = - 2
    printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);

    c = b - a; // 7 - 5 = 2
    printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);
    
    c = a / b; // 5 / 7 = 0 since both are int
    d = b / a; // 7 / 5  = 1
    printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);
    
    c = a % b; // remainder of 5
    d = b % a; // remainder of 2
    printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);

    c = -a - b; // -5 - 7 = -12
    d = -b - a; // -7 - 5 = -12
    printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);

    /*
        a = ++b is 
                b = b + 1; 
                a = b;
        a = b++ is 
                a = b 
                b = b + 1
    */
    c = ++a + b++; 
    /*
        a = a + 1 = 5 + 1 = 6
        c = a + b = 6 + 7 = 13
        b = b + 1 = 7 + 1 = 8

    */
    d += 5;  
    /*
        d = d + 5;
        d = -12 + 5 = -7

    */
    printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);
    
    return 0;
}