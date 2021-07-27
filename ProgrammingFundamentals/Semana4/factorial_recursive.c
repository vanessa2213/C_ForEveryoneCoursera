/*
    Recursive Iterative Factorial

    Vanessa Jaime

    long is used in order to be more precise with numbers
    as double only gives you 6 significant figures.

    26/07/2021


*/

#include <stdio.h>

long int factorial(int n)
{
    long f = 1;
    
    
    for(int i=1; i<=n; i++)
        f = f * i;
    return f;
}

long int recursive_factorial(int n)
{
    if(n == 1)
        return 1;
    else 
        return(recursive_factorial(n-1)*n);
}

int main(void)
{
    int how_many = 0;

    printf("Factorials up to: ");
    scanf("%d", &how_many);

    printf("\nfactorials \n");

    printf("not recursive");
    for (int i = 1; i<= how_many; i++)
        printf("\n%d\t %ld\n", i, factorial(i));
    printf("\n\n");

    printf("recursive");
    for(int i = 1; i<= how_many; i++)
        printf("\n%d\t %ld\n", i, recursive_factorial(i));
    printf("\n\n");
    return 0;

}