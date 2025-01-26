/*8. Temperature Conversion
Develop an algorithm, pseudocode, and flowchart for converting a temperature value from Celsius to Fahrenheit using the formula F = (C × 9/5) + 32.
*/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9 / 5) + 32;

   
    printf("Temperature in Fahrenheit: %f\n", fahrenheit);

    return 0;
}
