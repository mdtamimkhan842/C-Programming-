#include <stdio.h>
int main ()
{
    int x,y, x_plus_y, x_minus_y;

    printf ("enter the value of x+y:");
    scanf ("%if", & x_plus_y);

    printf ("enter the value of x-y:");
    scanf ("if", & x_minus_y );

    x= (x_plus_y + x_minus_y) / 2;
    y= (x_plus_y - x_minus_y) / 2;
    printf ("x=  % 0.2if, y= % 0.2 if/n", x,y);

    return 0;
}
