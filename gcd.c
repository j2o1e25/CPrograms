/*10. Find the GCD of Two Numbers
Create an algorithm, pseudocode, and flowchart to find the greatest common divisor (GCD) of two numbers using the Euclidean algorithm. in c
*/

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Apply the Euclidean algorithm
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    // Output the GCD
    printf("The GCD is: %d\n", a);

    return 0;
}
