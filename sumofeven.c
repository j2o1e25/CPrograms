/*
1. Algorithm to Calculate Sum of Even Numbers
Write an algorithm, pseudocode, and flowchart for calculating the sum of all even numbers from 1 to n, where n is entered by the user.
*/
#include<stdio.h>
int main()
{
    int n=0,sum=0;
    printf("Enter n:");
    scanf("%d", &n);
    for(int i=1; i<=n ; i++)
    {
        if (i%2==0)
        {
            sum+=i;
        }
    }
    printf("Sum of all even numbers between 1 and %d is %d",n,sum);
    return 0;
}