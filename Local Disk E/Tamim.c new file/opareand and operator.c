#include <stdio.h>
int main ()
{
int x= 6;

printf ("%d\n", x++);
printf ("%d\n", ++x);

x= 6;
printf ("%d\n", ++x);
printf ("%d\n", x++);

return 0;
}
