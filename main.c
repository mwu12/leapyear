#include <stdio.h>
#include <stdlib.h>

enum LEAPYEAR
{
    INVALID_LEAP_YEAR,
    VALID_LEAP_YEAR
};

int leap_year(int year)
{
    // Add your status and variable checks here
    if ( year%400 == 0 )
        return (VALID_LEAP_YEAR);
    else if ( year%100 == 0 )
        return (INVALID_LEAP_YEAR);
    else if ( year%4 == 0 )
        return (VALID_LEAP_YEAR);
    else
        return (INVALID_LEAP_YEAR);
}

int main()
{
    int y;
    int total = 0;

    for (y=1584; y<=2101; y++)
    {
        total += leap_year(y);
        if ( leap_year(y) == VALID_LEAP_YEAR )
            printf("%d\n", y);
    }
    printf("Between 1584 and 2101, total %d leap years.\n", total);

    return 0;
}

