#include <stdio.h>
int main ()
{
int a[5]= {1,2,3,4,5};
int *ptr = &a[2];

printf ("%d\n", *(ptr));
printf ("%d\n", *(ptr+1));
printf ("%d\n", *(ptr-1));

return 0;
}
