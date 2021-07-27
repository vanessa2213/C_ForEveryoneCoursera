/*
Fibonacci code in recursive

Vanessa Jaime

26/07/2021


*/

#include <stdio.h>

long fibonacci(int n)
{
    long f2 = 0, f1 = 1, f_old;
    
    for(int i = 0; i<n; i++)
    {
        f_old = f2;
        f2 = f2 + f1;
        f1 = f_old;
    }
    return f2;
}

long recursive_fibonacci(int n)
{
    if(n<=1)
        return n;
    else
        return(recursive_fibonacci(n-1)+recursive_fibonacci(n-2));
    
}

int main(void)
{
    int how_many = 0;

    printf("Fibonacci numbers up to: ");
    scanf("%d", &how_many);

    printf("\nFibonacci\n");
    printf("#\t no recursive\t recursive");
    for(int i = 1; i<=how_many; i++)
        printf("\n%d\t %ld\t\t %ld\n",i , fibonacci(i), recursive_fibonacci(i));
    
    return 0;

}