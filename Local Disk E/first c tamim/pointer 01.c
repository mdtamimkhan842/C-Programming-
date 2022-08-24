#include <stdio.h>
int main ()
{
int i=10;
int *p;
p= &i;

printf("value of x: %d", i);
printf(" value of x: %d", *p);

return 0;
}
