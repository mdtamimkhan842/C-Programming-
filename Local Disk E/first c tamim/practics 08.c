#include <stdio.h>
int main ()
{
    int  years, week, days;
    days = 1329;
    years = days/365;
    week = (days % 365)/7;
    days = days - ((365* years) + ( week *7));
    printf ("%d\n", years);
    printf (" %d\n", week);
    printf (" %d\n", days);
    return 0;
}
