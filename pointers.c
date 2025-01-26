#include<stdio.h>

int main(int argc, char argv[])
{
    int a = 5; //declare and assign a variable a to store integer value 5
    int* pa; //declaring a point to an integer - pa can only point to address sotring integer
    pa = &a; //assigning he address of a (&a), to integer pointer pa

    printf("Address stored in pa: %d", pa);
    printf("value stored at address pointed to by pa: %d", *pa);
    return 0;
}