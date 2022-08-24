#include <stdio.h>
int main ()
{
int x=70;
int *p;
p= &x;
printf ("%d\n", x);
printf ("%d\n", *p);
printf ("%d\n", p);


return 0;
}
