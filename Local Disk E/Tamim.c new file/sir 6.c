#include <stdio.h>
int main ()
{
int i,j,k, max;
printf ("Enter the value:");
scanf ("%d%d%d", &i, &j, &k);
max = (i>j && i>k)? (i): (j>k)?(j):(k);
printf ("Enter the maximum values: %d\n", max);


return 0;
}
