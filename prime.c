/*
3. Prime Number Check
Write the algorithm, pseudocode, and flowchart to check whether a given number is a prime number or not.

*/
#include<stdio.h>
#include<stdbool.h>

bool isprime(int n)
{
    if(n<=1)
    {
        return false;
    }
    
    for(int i=2; i <n/2; i++)
    {
        if (n%i==0)
        {
            return false;
        }
    
    }
    return true;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    bool answer = isprime(n);
    if (answer ==true)
    {
        printf("Number %d is prime",n);
    }
    else
    {
        printf("Number %d is not prime",n);

    }
    return 0;
}