#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For seeding the random number generator

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number in the range 1 to 100
    int random_number = (rand() % 100) + 1;


    int guess=0;
    int choice=0;
    printf("Random number between 1 and 100: %d\n", random_number);
    while(1)
    {

        printf("enter your guess:");
        scanf("%d", &guess);
        if(guess== random_number)
        {
            printf("Yes u re right");
            break;
        }
        else if(guess > random_number)
        {
            printf("go lower");
        
        }
        else    {
            printf("go higher");
        
        }
        printf("\npress 1 to continue: ");
        scanf("%d",&choice);
        if(choice == 0)
        {
            break;
        }
        
    }
    return 0;


}
