#include <stdio.h>
int main ()
{
int x[5]= {1,2,3,4,5};
int *p;
p= &x[3];
printf ("%d\n", *p);
printf ("%d\n", (*p+1));
printf ("%d\n", (*p-1));

return 0;
}
