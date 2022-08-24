#include <stdio.h>
int main ()
{
char x='y';
char *p;
p= &x;
printf ("%c\n", x);
printf ("%c\n", *p);
printf ("%c\n", p);


return 0;
}
