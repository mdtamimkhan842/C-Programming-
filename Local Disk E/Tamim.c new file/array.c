#include <stdio.h>
int main ()
{
int a[3];
a[0] = 20;
a[1] = 52;
a[2] = 66;
int i;

i = a[1] + a[2]/a[0];
printf ("%d\n",i);

return 0;
}
