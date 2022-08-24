#include <stdio.h>
int main ()
{
int days, day, year, week;
days= 1329;
year = days/365;
week= (days%365)/7;
day = days- ((365*year)+ (week*7));

printf ("year is: %d\n", year);
printf ("week is: %d\n",week);
printf ("day is: %d\n",day);



return 0;
}
