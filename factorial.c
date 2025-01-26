/*
2. Factorial Using Recursion
Design a pseudocode, algorithm, and flowchart to calculate the factorial of a number using recursion.
*/
#include<stdio.h>
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}
int main()
{
    int n=0,sum=0;
    printf("Enter n:");
    scanf("%d", &n);
    int answer = factorial(n);

    printf("Factorial of  %d is %d",n,answer);
    return 0;
}