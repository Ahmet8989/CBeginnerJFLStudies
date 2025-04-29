#include <stdio.h>
#include "../Headers/other.h"

//Enums: first initiated by the keyword enım, then give the type a name, then define the permissible values

void testEnumSection() {
    enum myColors {red, yellow, blue};
    enum monthOfYear {January, Fabruary, March, April, May, June, July, August, September, October, November, December};
    enum myColors colorOne = red, colorFive = yellow, colorSix = blue;
    enum monthOfYear springStartingMonth = March;
    enum directions {up, down, left = 9, right}; // up-> 0, down -> 1, left -> 9, right -> 10
    char broiled = 'T';
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company firstCompany = XEROX;
    enum Company secondCompany = GOOGLE;
    enum Company thirdCompany = EBAY;
    for(enum monthOfYear m = January; m <= December; m++){
        printf("%d. item's value is:  %d\n", (m+1), m);
    }
    printf("-------------\n");
    printf("First color of myColors is: %d\n", colorOne);
    printf("-------------\n");
    printf("The value of xerox is: %d\n", firstCompany);
    printf("The value of google is: %d\n", secondCompany);
    printf("The value of ebay is: %d\n", thirdCompany);
    printf("-------------\n");

}


// compiler treats enumeration identifiers as integer constants 

// first name in enum list is 0 

// Char: defined with single quotes 

// if you omit quotes compiler thinks it is a variable name, if you use a double quote compiler thinks strings