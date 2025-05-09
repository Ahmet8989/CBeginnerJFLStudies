#include <stdio.h>
#include <stdbool.h>
#include "../Headers/other.h"

void testControlFlowExamples()
{
    int score = 95;
    int big = 90;
    if(score > big)
        printf("Jackpot!\n\n\n");
    if(score > big)
    {
        score++;
        printf("You win! Your score is %d\n\n\n", score);
    }
}
void testControlFlowExamplesB()
{
    int number_to_tested = 0;
    int remainder_from_number= 0;
    printf("Enter your number to be tested..: ");
    scanf("%i", &number_to_tested);
    remainder_from_number = number_to_tested % 2;
    if(remainder_from_number == 0)
        printf("Number is even.\n\n\n");
    else
        printf("NUmber is odd.\n\n\n");
}
void testControlFlowExamplesC(int number5)
{
    int number_to_tested = number5;
    if(number_to_tested > 0)
    {
        printf("Number is positive.\n\n\n");
    } else if (number_to_tested < 0)
    {
        printf("Number is negative.\n\n\n");
    }else
    {
        printf("NUmber equals zero.\n\n\n");
    }
}
void testControlFlowExamplesD(int number5)
{
    int number_to_tested = number5;
    if(number_to_tested <= 100)
    {
        if(number_to_tested >=50)
        {
            printf("The number you entered (%i), is between 50 - 100", number_to_tested);
        }else
        {
            printf("The number you entered (%d), is smaller than 50", number_to_tested);
        }
    } else
    {
        printf("The number you entered (%i), is bigger than 100", number_to_tested);
    }
}
void testControlFlowExamplesE(int number5)
{
    int number_to_tested = number5;
    int x = 0;
    x = number_to_tested > 5 ? 65 : 55;
    printf("New value of x is (%d), because entered number is greater than 5.\n\n\n", x);
}
void testControlFlowExamplesF(int numberOfHours)
{
    #define TAXRATE_SMALLER_300 .15 // This is how nyou generate a constatnt, but usually outside the main function not here
    #define TAXRATE_SMALLER_450 .30 // This is how nyou generate a constatnt, but usually outside the main function not here
    #define TAXRATE_UPPER_450 .35 // This is how nyou generate a constatnt, but usually outside the main function not here

    float hourlySalary = 20.0;
    float grossPay = 0.0;
    float netPay = 0.0;
    float taxPay = 0.0;
    float taxRateA = 0.15;
    float taxRateB = 0.3;
    float taxRateD = 0.35;
    if(numberOfHours > 40)
    {
        grossPay = (((hourlySalary * (3/2)) * (numberOfHours - 40)) + (hourlySalary * 40));
    }else
    {
        grossPay = hourlySalary * numberOfHours;
    }
    if(grossPay > 450)
    {
        taxPay = (((grossPay - 450) * TAXRATE_UPPER_450) + (150 * TAXRATE_SMALLER_450) + (300 * TAXRATE_SMALLER_300));
    }else if( grossPay > 300 && grossPay <= 450)
    {
        taxPay = (((grossPay - 300) * TAXRATE_SMALLER_450) + (300 * TAXRATE_SMALLER_300));
    }else
    {
        taxPay = (grossPay * TAXRATE_SMALLER_300);
    }
    netPay = grossPay - taxPay;
    printf("You worked (%d) hours this week, your gross salary equals: $(%.2f).\n", numberOfHours, grossPay);
    printf("Your gross pay equls the $(%.2f), and the tax amount equals the $(%.2f).\n", grossPay, taxPay);
    printf("Your gross pay and tax pay equals the $(%.2f, %.2f), your net pay equals the $(%.2f).\n", grossPay, taxPay, netPay);
}
void testControlFlowExamplesG(enum Weekday todayEntered)
{
    
    enum Weekday today = todayEntered;
    switch (today)
    {
        case Sunday:
            printf("Today is sunday\n");
            break;
        case Monday:
            printf("Today is monday\n");
            break;
        case Tuesday:
            printf("Today is tuesday\n");
            break;
        default:
            printf("Whatever..\n");
            break;
    }
}
