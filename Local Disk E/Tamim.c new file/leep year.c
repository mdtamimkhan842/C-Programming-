#include <stdio.h>
int main ()
{
int days, week, year, day;
days= 1329;
year = days / 365;
week = (days % 365)/7;
day = days - ((365*year) + (week*7));
printf ("%d\n",year );
printf ("%d\n", week);
printf ("%d\n", day);

return 0;
}

//year = days/365;
//week = (days % 365)/7;
//day = days- ((year*365)+ (week*7));
