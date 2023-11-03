#include "main.h"

int _isalpha(int c) {
    /* Implement your function here */
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1; // c is an alphabetic character
    } else {
        return 0; // c is not an alphabetic character
    }
}
