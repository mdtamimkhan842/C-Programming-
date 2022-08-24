#include <stdio.h>
int main ()
{
int a [5];

a[0] = 20;
a[1] = 35;
a[2] = 40;
a[3] = 23;
a[4]= 52;

int x = a[3] + a[4];
printf ("%d\n", x);

a[3]=88;

x= a[3] + a[4];
printf ("%d\n", x);

return 0;
}
