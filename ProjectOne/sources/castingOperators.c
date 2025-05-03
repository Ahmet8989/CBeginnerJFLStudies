#include <stdio.h>
#include <stdbool.h>
#include "../Headers/other.h"

void testCastingOperatorsSection()
{
    int x = 0;
    printf("Value of x is..: %d\n\n\n", x);
    float fOne = 13.4;
    x = fOne;
    printf("New value of x is..: %d\n\n\n", x);
    x =0;
    printf("Value of x is..: %d again!!!\n\n\n", x);
    float fTwo = 13.7;
    x = fTwo;
    printf("Value of x is..: %d. Decimal portion is now starts with a number greater than 5, nothing changed.\n\n\n", x);
    int xTwo = 15;
    float fThree = 0.0;
    printf("Value of x is..: %d\n\n\n", xTwo);
    fThree = xTwo;
    printf("Value of x is..: %f\n\n\n", fThree);
    int result = (int)23.7 + (int)34.8;
    printf("Result is..: %d\n\n\n", result);
    printf("Size of the result variable is..: %d bytes\n\n\n", sizeof(result));
    printf("Another operator is (*a): represents a pointer to a variable.\n");
    printf("Another operator is (?:) -> ternary operator\n");
    printf("Variables of type char occupy %zd bytes\n", sizeof(char));
    printf("Variables of type short occupy %zd bytes\n", sizeof(short));
    printf("Variables of type int occupy %zd bytes\n", sizeof(int));
    printf("Variables of type long occupy %zd bytes\n", sizeof(long));
    printf("Variables of type long long occupy %zd bytes\n", sizeof(long long));
    printf("Variables of type float occupy %zd bytes\n", sizeof(float));
    printf("Variables of type double occupy %zd bytes\n", sizeof(double));
    printf("Variables of type long double occupy %zd bytes\n", sizeof(long double));
}