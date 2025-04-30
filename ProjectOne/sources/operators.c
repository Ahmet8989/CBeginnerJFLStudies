#include <stdio.h>
#include <stdbool.h>
#include "../Headers/other.h"

// Arithmatic, logical, assignment, relational operators

void testOperatorsSsection()
{
    int a = 40;
    int b = 30;
    int new_a = --a;
    int new_b = ++b;
    bool isAGreater = a > b;
    bool isAPositive = a > 0;
    int result   = a + b;
    int result_2 = a - b;
    int result_3 = a * b;
    int result_4 = a / b;
    int result_5 = a % b;
    _Bool result_6 = (isAGreater) && (isAPositive);
    _Bool result_7 = (isAGreater) && (isAPositive);
    _Bool result_8 = !(a < 0);
    printf("a + b is equal to %d\n", result);
    printf("a - b is equal to %d\n", result_2);
    printf("a * b is equal to %d\n", result_3);
    printf("a / b is equal to %d\n", result_4);
    printf("remainder of a / b is equal to %d\n", result_5);
    printf("New value of a is equal to %d\n", new_a);
    printf("New value of b is equal to %d\n", new_b);
    printf("Result 6: %i\n", result_6);
    printf("Result 7: %i\n", result_7);
    printf("Result 8: %i\n", result_8);
}

// Logical operators: AND OPERATOR -> (&&), OR OPERATOR -> (||), NOT OPERATOR -> (!)
// (a++) is not the same (++a), or (a--) is not the same (--a)
// Assignment operators: -> (=), (+=), (-=), (*=), (/=), (%=)
// Relational operators: (==), (!=), (>), (<), (>=), (<=)