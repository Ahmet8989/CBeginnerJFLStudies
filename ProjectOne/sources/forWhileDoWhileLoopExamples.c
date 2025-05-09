#include <stdio.h>
#include "../Headers/other.h"
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void testForWhileDoWhileLoopExamples()
{
    for(int i = 1, j = 2; i <= 5; i++, j = j + 2)
    {
        printf("(%d) * (%d) = (%d)\n", i, j, i*j);
    }
}
void testForWhileDoWhileLoopExamplesB()
{
    int count = 1;
    int sum = 0;

    while (count <=5)
    {
        sum += count;
        printf("(%d). iteration. Value = (%d).\n", count, sum);
        count++;
    }
}
void testForWhileDoWhileLoopExamplesC()
{
    int z = 0;
    do
    {
        printf("This sentence will be written, even condition wont be met, because this is do-while loop.\n");
        z++;
        printf("%d\n",z);
    } while (z < 0);
    
}
void testForWhileDoWhileLoopExamplesD()
{
    for(int i = 1; i < 11; i++)
    {
        for(int j = 1; j < 11; j++)
        {
            printf("(%d) * (%d) = (%d)\n", i, j, i*j);
        }
        printf("**********\n");
    }
}
void testForWhileDoWhileLoopExamplesE()
{
    for(int i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }
}
void testForWhileDoWhileLoopExamplesF()
{
    for(int i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }
}
void testForWhileDoWhileLoopExamplesG()
{
    printf("This is a guessing game.\n");
    printf("I have choosen a number between 0 and 25 which you must guess.\n");
    printf("\n");
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 26;
    int numberOfTries = 5;
    int guessedNumber = 0;
    int decidedNumber = randomNumber;
    bool conditionOfWin = false;
    printf("You have (%d) tr%s left.\n", numberOfTries, numberOfTries == 1 ? "y" : "ies");
    while ((numberOfTries > 0))
    {
        while (!conditionOfWin)
        {
            printf("Guess the number..: \n");
            scanf("%d", &guessedNumber);
            if((guessedNumber < 0) || (guessedNumber > 25))
            {
                printf("You enter an invalid number. Please enter number between 0 - 25.");
                break;
            }
            if(decidedNumber == guessedNumber)
            {
                conditionOfWin = true;
                break;
            } else if (decidedNumber < guessedNumber){
                numberOfTries--;
                printf("Sorry, (%d) is not the number.\n", guessedNumber);
                printf("You have (%d) tr%s left.\n", numberOfTries, numberOfTries == 1 ? "y" : "ies");
                printf("You enterd bigger value. You must guessed lower number.\n");
            } else if (decidedNumber > guessedNumber){
                numberOfTries--;
                printf("Sorry, (%d) is not the number.\n", guessedNumber);
                printf("You have (%d) tr%s left.\n", numberOfTries, numberOfTries == 1 ? "y" : "ies");
                printf("You enterd smaller value. You must guessed upper number.\n");
            }
            if(numberOfTries <= 0)
            {
            break;
            }
        }
        
    }
    if(conditionOfWin)
    {
        printf("You have (%d) tr%s left but you already win. Congratulations!!!!!!", numberOfTries, numberOfTries == 1 ? "y" : "ies");
    } else {
        printf("The number was (%d), sorry maybe next time..\n\n\n", decidedNumber);
    }
}