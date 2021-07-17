/* 
    Sizeof operator
    Vanessa Jaime

    16/07/2021

*/

#include <stdio.h>

int main(void)
{
    
    //sizeof is the size in bytes of a variable or type

    printf("on my system\n"); 
    printf("int is %lu bytes\n", sizeof(int)); //%lu is Unsigned integer
    printf("long int is %lu bytes\n", sizeof(long int));
    printf("char is %lu bytes\n", sizeof(char));
    printf("float is %lu bytes\n", sizeof(float));
    printf("double is %lu bytes\n", sizeof(double));
    printf("long double is %lu bytes\n", sizeof(long double));

    return 0; 

}