#include <stdio.h>
#include <stdbool.h>
#include "../Headers/other.h"

void testFormatSpecifierSection() {
    int sum = 89;
    int integerVar = 100;
    float floatingVar = 331.7947843598765;
    double doubleVar = 8.44e+13;
    double dOubleVarTwo = 9.47e+15;
    char charVar = 'W';
    _Bool boolVarOne = 0;
    bool boolVarTwo = true;
    printf("The sum is: %d\n", sum);
    printf("The integerVar is: %i,\nThe floatingVar is: %.5f,\nThe doubleVar is: %e,\nThe dOubleVarTwo is: %g,\nThe charVar is: %c,\nThe boolVarOne is: %i,\nThe boolVarTwo is: %i,\n", integerVar, floatingVar, doubleVar, dOubleVarTwo, charVar, boolVarOne, boolVarTwo);
}

void rectangleDemo() {
    double rectangleWidth = 3.4;
    double rectangleHeight = 4.5;
    double rectangleCircumference = (2.0) * (rectangleWidth + rectangleHeight);
    double rectangleArea = rectangleWidth * rectangleHeight;
    printf("The width of the rectangle is: %e\n", rectangleWidth);
    printf("The height of the rectangle is: %e\n", rectangleHeight);
    printf("The perimeter of the rectangle is: %e\n", rectangleCircumference);
    printf("The area of the rectangle is: %e\n", rectangleArea);
}