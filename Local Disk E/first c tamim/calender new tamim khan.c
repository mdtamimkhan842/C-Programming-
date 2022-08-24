#include <stdio.h>
int getfirstdaysintheyear (int year)
{
    int day = ((year*365 +(year-1)/4)- ((year-1)/100)+ ((year-1)/400))% 7;
    return day;
}

int main ()
{
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonth[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int i, j, totaldays, weekday=0, spaceCounter=0, year;

    printf ("enter your favorite year\n");
    scanf ("%d", &year);
    printf ("\n\n*************welcome to %d**************\n\n", year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        daysInMonth [1]= 29;
    }

    weekday = getfirstdaysintheyear(year);

    for (i=0; i<12; i++)
    {
        printf("\n\n\n**************%s*******************\n", months[i]);
        printf ("\n\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");

        for (spaceCounter =1; spaceCounter<=weekday; spaceCounter++)
        {
            printf ("      ");
        }
        totaldays = daysInMonth[i];

        for (j=1; j<=totaldays; j++)
        {
            printf("%6d", j);
            weekday++;
            if (weekday>6)
            {
                weekday = 0;
                printf ("\n");
            }
        }
    }
    return 0;
}
