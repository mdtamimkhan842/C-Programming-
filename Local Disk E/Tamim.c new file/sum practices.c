#include <stdio.h>
int main ()
{
int i, sum =0;
for (i=1; i<20; i = i+2){
printf ("%d\t", i);
sum = sum+i;
}
printf ("\n");
printf ("%d", sum);

return 0;
}
