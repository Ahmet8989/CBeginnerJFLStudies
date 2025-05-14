#include <stdio.h>
#include "../Headers/other.h"
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MONTHS 12

void testArrayDemos(int numberOne, int numberTwo, int numberThree, int numberFour, int numberFive)
{
    // Data items in arrays referred to as elements
    // single type specified number of element 
    // Declaring an array -> long numbers[10]; , 10 called as size of an array or dimension of an array 
    int grades[5]; //Array storing 5 value
    int sum = 0;
    float avarage = 0.0f;
    sum = numberOne + numberTwo + numberThree + numberFour + numberFive;
    avarage = (sum / 5);
    grades[0] = numberOne;
    grades[1] = numberTwo;
    grades[2] = numberThree;
    grades[3] = numberFour;
    grades[4] = numberFive;
    for (int i = 0; i < 5; i++)
    {
        printf("The (%d). element of the array..: %d\n", (i+1), grades[i]);
    }
    printf("******");
    printf("Sum of the elements in the array equals the (%d), and their avarage equals the (%.3f).\n", sum, avarage);
}

void testArrayDemosB()
{

    int counters[5] = {0, 0, 0, 0, 0}; // Initializing an array
    for(int i = 0; i < 5; i++){
        printf("(%d). value of the counters array equals the (%d).\n", (i+1), counters[i]);
    }
    printf("===============\n");
    int numbers[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        printf("(%d). value of the numbers array equals the (%d).\n", (i+1), numbers[i]);
    }
    printf("===============\n");
    // Also we don't have to completely initialize the array
    int sampleData[500] = {100, 300, 500}; 
    // Initialize the first three values of the sample data to the 100, 300, 500
    // Sets the remaining 497 element to zero
    for(int i = 0; i < 500; i++){
        printf("(%d). value of the sample data equals (%d).\n", (i+1), sampleData[i]);
    }
    printf("===============\n");
    // C99 added a feature called designated initializers
    // Allows you to pick and choose which elements are initialized
    int anotherSampleData[50] = {[9] = 500, [7] = 300, [5] = 100};
    for(int i = 0; i < 50; i++){
        printf("(%d). value of the sample data equals (%d).\n", (i+1), anotherSampleData[i]);
    }
    printf("===============\n");
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i = 0; i < 12; i++){
        printf("(%d). months of the year has (%d) days.\n", (i+1), days[i]);
    }
}
void testArrayDemosC(int enteredNumberA, int enteredNumberB)
{
    int startingNumber = enteredNumberA;
    int finishingNumber = enteredNumberB;
    int primeSet[100];
    primeSet[0] = 2;
    int counter  = 1;
    bool isPrime = true;
    for(int i = startingNumber; i <= finishingNumber; i++)
    {
        isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            primeSet[counter] = i;
            counter++;
        }
    }
    printf("There are (%d) prime numbers exist between 0 - 100.\n", (counter + 1));
    printf("===============\n");
    for(int i = 0; i < 100; i++)
    {
        printf("(%d). number in the primeSet array is equal to the (%d).\n", (i + 1), primeSet[i]);
    }
    printf("===============\n");
    for(int i = 0; i < counter; i++)
    {
        printf("(%d). number in the primeSet array is equal to the (%d).\n", (i + 1), primeSet[i]);
    }
}
void testArrayDemosD()
{
    float rainFall[5][12] = 
    {
        {6.7, 7.4, 4.5, 5.4, 5.3, 3.4, 2.3, 0.7, 3.5, 3.6, 4.7, 7.7},
        {6.5, 7.9, 4.3, 5.7, 5.5, 3.7, 2.5, 0.9, 3.4, 3.9, 4.6, 7.9},
        {6.6, 7.8, 4.4, 5.7, 5.5, 3.3, 2.4, 0.6, 3.4, 3.5, 4.4, 7.9},
        {6.4, 7.5, 4.3, 5.8, 5.7, 3.5, 2.2, 0.5, 3.6, 3.7, 4.4, 7.4},
        {6.6, 7.6, 4.6, 5.6, 5.6, 3.6, 2.5, 0.6, 3.6, 3.5, 4.6, 7.6}
    };
    float yearOneSum = 0;
    float yearTwoSum = 0;
    float yearThreeSum = 0;
    float yearFourSum = 0;
    float yearFiveSum = 0;
    float monthOneSum = 0;
    float monthTwoSum = 0;
    float monthThreeSum = 0;
    float monthFourSum = 0;
    float monthFiveSum = 0;
    float monthSixSum = 0;
    float monthSevenSum = 0;
    float monthEightSum = 0;
    float monthNineSum = 0;
    float monthTenSum = 0;
    float monthElevenSum = 0;
    float monthTwelveSum = 0;
    int numberOfMonths = 12;
    int numberOfYears = 5;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            yearOneSum += (i == 0) ? rainFall[i][j] : 0;
            yearTwoSum += (i == 1) ? rainFall[i][j] : 0;
            yearThreeSum += (i == 2) ? rainFall[i][j] : 0;
            yearFourSum += (i == 3) ? rainFall[i][j] : 0;
            yearFiveSum += (i == 4) ? rainFall[i][j] : 0;
            monthOneSum += (j == 0) ? rainFall[i][j] : 0;
            monthTwoSum += (j == 1) ? rainFall[i][j] : 0;
            monthThreeSum += (j == 2) ? rainFall[i][j] : 0;
            monthFourSum += (j == 3) ? rainFall[i][j] : 0;
            monthFiveSum += (j == 4) ? rainFall[i][j] : 0;
            monthSixSum += (j == 5) ? rainFall[i][j] : 0;
            monthSevenSum += (j == 6) ? rainFall[i][j] : 0;
            monthEightSum += (j == 7) ? rainFall[i][j] : 0;
            monthNineSum += (j == 8) ? rainFall[i][j] : 0;
            monthTenSum += (j == 9) ? rainFall[i][j] : 0;
            monthElevenSum += (j == 10) ? rainFall[i][j] : 0;
            monthTwelveSum += (j == 11) ? rainFall[i][j] : 0;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            printf("(%d). month of (%d). year rainfall equals to the (%.2f)\n", (j+1), (i+1), rainFall[i][j]);
        }
        if(i == 0)
            printf("(%d). year total rainfall equals to the (%.2f).\n", (i+1), yearOneSum);
        else if(i == 1)
            printf("(%d). year total rainfall equals to the (%.2f).\n", (i+1), yearTwoSum);
        else if(i == 2)
            printf("(%d). year total rainfall equals to the (%.2f).\n", (i+1), yearThreeSum);
        else if(i == 3)
            printf("(%d). year total rainfall equals to the (%.2f).\n", (i+1), yearFourSum);
        else if(i == 4)
            printf("(%d). year total rainfall equals to the (%.2f).\n", (i+1), yearFiveSum);
    }
    for(int i = 0; i < 11; i++)
    {
        if(i == 0)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), monthOneSum);
        else if(i == 1)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), monthTwoSum);
        else if(i == 2)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), monthThreeSum);
        else if(i == 3)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), monthFourSum);
        else if(i == 4)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), monthFiveSum);
        else if(i == 5)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), monthSixSum);
        else if(i == 6)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), monthSevenSum);
        else if(i == 7)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), monthEightSum);
        else if(i == 8)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), monthNineSum);
        else if(i == 9)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), monthTenSum);
        else if(i == 10)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), yearFiveSum);
        else if(i == 11)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), monthElevenSum);
        else if(i == 12)
            printf("(%d). month total rainfall equals to the (%.2f).\n", (i+1), monthTwelveSum);
    }
}
