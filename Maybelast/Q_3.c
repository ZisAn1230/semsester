#include <stdio.h>

int main() {
    // Define an array to hold 100 integer values
    int values[100];

    // Use a loop to populate the array
    for (int i = 0; i < 100; i++) {
        values[i] = i + 1; // Assign values 1 to 100
    }

    // Print the values to verify
    for (int i = 0; i < 100; i++) {
        printf("values[%d] = %d\n", i, values[i]);
    }

    return 0;
}
