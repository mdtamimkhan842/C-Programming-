#include <stdio.h>
int main ()
{
int i,sum = 0;
for (i=1; i<=10; i++){
printf ("%d", i);
printf ("   ");
sum +=i;
printf ("%d", sum);
}



return 0;
}
