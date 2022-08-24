#include <stdio.h>
#define Pi 3.1416
int main ()
{
float side, surfArea, volume;
printf ("Enter the values: ");
scanf ("%f", &side);

surfArea = 6.0*side*side;
volume = pow (side,3);
printf ("area is: %0.2f", surfArea);
printf ("volume is: %0.2f", volume);



return 0;
}
