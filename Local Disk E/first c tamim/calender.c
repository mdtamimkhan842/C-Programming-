#include <stdio.h>

int main ()
{
char *months[] = {"January", "Febuary", "March", "April", "May", "June", "July", "Auguest", "September", "November", "December"};
int daysinmonth[]= {31,28,31,30,31,30,31,30,31,31,30,31};
int i, j, totaldays, year, weekend =0, spaceCounter =0;

printf ("enter your favourite year:%d\n", year);
scanf ("%d", &year);
printf ("\n\n\n----------------------welcome to %d---------------------\n\n\n", year );



for (i=0; i<12; i++){
printf("\n\n\n---------------------%s-----------------\n", *months[i]);
printf ("\n\n    sat    sun    mon    tue    wed    thu    fri    sat\n\n");
}
for (spaceCounter =1; spaceCounter<=weekend; spaceCounter++){
    printf ("    ");
}
totaldays = daysinmonth[i];
for (j=0; j<totaldays; j++){
printf("%6d", j);
}
weekend++;
if (weekend>6){
    weekend = 0;
    printf ("\n");
}


return 0;
}
