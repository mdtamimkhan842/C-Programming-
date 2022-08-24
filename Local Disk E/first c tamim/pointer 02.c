#include <stdio.h>
int main ()
{
char i='x';
char *p;
p= &i;

printf("value of x: %c\n", i);
printf(" value of x: %c\n", *p);

return 0;
}
