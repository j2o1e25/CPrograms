/*5. Simple Interest Calculation
Write an algorithm, pseudocode, and flowchart to calculate simple interest based on the formula SI = (P × R × T) / 100, where P is the principal amount, R is the rate of interest, and T is the time in years.

*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float Principle=0;
    float Rate=0;
    float Time=0;
    float SimpleInterest=0;

    printf("Enter the principle:");
    scanf("%f",&Principle);

    printf("Enter the rate:");
    scanf("%f",&Rate);

    printf("Enter the time :");
    scanf("%f",&Time);

    SimpleInterest = Principle * Rate * Time / 100;
    printf("The Simple interest for the principle %f at the rate of %f percent for the period of %f years is %f",Principle, Rate, Time,SimpleInterest);



    
    return 0;
}
