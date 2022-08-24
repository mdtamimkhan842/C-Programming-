#include <stdio.h>
int main ()
{
int celcius, farenheit;
printf ("enter the temperature in celcius");
scanf ("%if", &celcius);

farenheit = (1.8* celcius) + 32;
printf ("temperature in farenheit is; %if/n, farenheit");

return 0;
}
