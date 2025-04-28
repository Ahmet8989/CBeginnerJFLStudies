#include <stdbool.h>

int x = 3, y = 5, z = 7;

int a, b, c = 57; /*VALID BUT POOR FORM a,b -> not initialized, z = 57*/

double doubleVar = 8.44e+11;

long int numberOfPoints = 131071100L;

long double longDoubleVariable = 1.23e+7L;

_Bool boolVar = 1; // c89 standart 

bool myBoolean = true; // c99 standart ama bunun için stdbool must be included

unsigned int counter = 5;

// The type unsigned int, or unsigned, is used for variables that have only nonnegative values (positive)

// with unsigned, the accuracy of integer variable is extended

// int, float, double, char, _Bool

// 0XFFEF0D -> hexadecimal

// float examples: 3., 123.8, -.001

// 1.7e4 -> 10 to the power of 4

// all floating point constants taken as double, to explicitly express a float constant -> 1.23f

// C offer three adjective keywords to modify the basic integer type(can also be used by itself): short, long, unsigned, long long



