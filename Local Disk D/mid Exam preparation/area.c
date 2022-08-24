#include <stdio.h>
#define Pi 3.1416
int main ()
{
float a,b,c, r, area;
printf ("Enter the values: ");
scanf ("%f", &r);

area = Pi*r*r;

printf ("area is: %0.2f", area);


return 0;
}
