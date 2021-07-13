/*
The distance of a marathon in kilometers
Vanessa Jaime
13/07/2021

*/
#include <stdio.h>

int main(void){
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 * (miles + yards/1760.0); 
    /*
        yards = int and 1760.0 = double if we divided int/int the result will
        be int = 0 comparing to int/double = double not zero    
    */
    printf("\nA marathon is %lf kilometers. \n", kilometers);
    return 0; 
}
