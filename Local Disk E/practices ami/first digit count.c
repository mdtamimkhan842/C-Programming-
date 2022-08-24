#include <stdio.h>
#include <math.h>
int main ()
{
int  X, r, first;
scanf ("%d", &X);
r= log10(X);
first= X/pow(10, r);


if (first%2==0)
    printf ("EVEN");
else
    printf ("ODD");
return 0;
}
