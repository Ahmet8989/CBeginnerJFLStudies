#include <stdio.h>
#include <stdbool.h>
#include "../Headers/other.h"

void convertMinutesToYears()
{
    int minutesEntered = 5000000;
    printf("Please enter minutes you want to calculate: \n\n\n");
    fflush(stdout);
    scanf("%d\n\n\n", &minutesEntered);
    double hour = (minutesEntered / 60.0);
    double day = (minutesEntered / (24.0 * 60.0));
    double year = (minutesEntered / (60.0 * 24.0 * 365.0));
    int yearInt = (int)year;
    double remainderFromYear = (minutesEntered % (60 * 24 * 365));
    int remainderFromYearB = (int)remainderFromYear;
    int dayInt = (int)(remainderFromYearB / (60 * 24));
    double remainderFromDay = (remainderFromYearB % (60 * 24));
    int remainderFromDayB = (int)remainderFromDay;
    double hourB = (remainderFromYearB % (60));
    int hourBInt = (int)hourB;
    printf("The minute you entered equal to: %e year or %e day or %e hour\n", year, day, hour);
    printf("Additionally the minute you entered equal to: %d year, %d day , %d hour\n", yearInt, dayInt, hourBInt);
}