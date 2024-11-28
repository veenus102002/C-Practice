#include <stdio.h>

int main() {
    int i, sum = 0;

    // Loop through numbers from 1 to 100
    for (i = 1; i <= 100; i++) {
        // Skip even numbers
        if (i % 2 == 0) {
            continue;
        }
        
        // Add odd numbers to the sum
        sum += i;
    }

    // Print the final sum of odd numbers
    printf("Sum of odd numbers between 1 and 100: %d\n", sum);

    return 0;
}
