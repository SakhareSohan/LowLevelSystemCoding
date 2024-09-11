#include <stdio.h>

int main() {
    int a = 123;             // Integer
    char b = 'H';            // Single character
    char e[] = "hello world"; // String (character array for longer text)
    float c = 3.75;          // Floating point number
    double d = 12.37829;     // Double precision floating point number

    printf("%d %c %.2f %.9f %s\n", a, b, c, d, e);
    // d for decimal (int)
    // c for single character
    // .2f for float (2 decimal places)
    // .9f for double (9 decimal places)
    // s for string

    return 0;
}
