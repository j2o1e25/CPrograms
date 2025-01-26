/*
Finding the Largest Number in an Array
Create an algorithm, pseudocode, and flowchart for finding the largest number in an array of n elements provided by the user.
*/

#include <stdio.h>

int main() 
{
    int n, largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("The number of elements must be greater than 0.\n");
        return 1; 
    }

    printf("Enter the elements:\n");


    scanf("%d", &largest);

  
    for (int i = 1; i < n; i++) 
    {
        int num;
        scanf("%d", &num);
        if (num > largest) {
            largest = num;
        }
    }

    printf("The largest number is: %d\n", largest);
    return 0;
}
