/*
Generate Fibonacci Series
Design the algorithm, pseudocode, and flowchart to generate the first n terms of the Fibonacci sequence.
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    /*
    a=0,b=1
    ask for n

    */
    int zero=0, first=1, curr=0;
    int fib_arr[100];
    fib_arr[0]=0;
    fib_arr[1]=1;
    int n=0;
    printf("Enter no of terms:");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {

        fib_arr[i]=fib_arr[i-1] + fib_arr[i-2];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",fib_arr[i]);
        
    }
    return 0;
}
