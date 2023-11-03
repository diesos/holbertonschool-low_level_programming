#include "main.h"

int _atoi(char *s) {
    int result = 0; // Initialize the result
    int sign = 1;   // Initialize the sign as positive
    int i = 0;

    // Handle negative numbers
    if (s[0] == '-') {
        sign = -1; // If the first character is '-', set the sign as negative
        i = 1;     // Start from the next character
    }

    // Iterate through the string and convert characters to integers
    while (s[i] != '\0') {
        // Check if the character./s     is a digit
        if (s[i] >= '0' && s[i] <= '9') {
            result = result * 10 + (s[i] - '0'); // Convert character to integer and add to result
        } else {
            // If a non-digit character is encountered, break the loop
            break;
        }
        i++;
    }

    // Apply the sign to the result and return
    return sign * result;
}
