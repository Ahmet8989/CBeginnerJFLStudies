#include <stdio.h>
#include <stdbool.h>
#include "../Headers/other.h"

void testBitwiseOperatorsSection()
{
    // Bitwise operators: &, |, ^, ~, <<, >>
    unsigned int a = 60; // 0011 1100 (short version), 0000 0000 0000 0000 0000 0000 0011 1100(in real)
    unsigned int b = 13; // 0000 1101
    int result = 0, result_2 = 0, result_3 = 0, result_4 = 0, result_5 = 0, result_6 = 0;
    result   = a & b; // 0000 1100 -> 12
    result_2 = a | b; // 0011 1101 ->  61
    result_3 = a ^ b; // 0011 0001 -> 49
    result_4 = ~a;    // 1100 0011 -> -61
    result_5 = a << 4; // 0000 0000 0000 0000 0000 0011 1100 0000 -> 960
    result_6 = a >> 4; // 0000 0011 -> 3
    printf("The result of a and b is: %d\n\n\n", result);
    printf("The result of a or b is: %d\n\n\n", result_2);
    printf("The result of a xor b is: %d\n\n\n", result_3);
    printf("The result of ~a is: %d\n\n\n", result_4);
    printf("The result of a << 4 is: %d\n\n\n", result_5);
    printf("The result of a >> 4 is: %d\n\n\n", result_6);
}