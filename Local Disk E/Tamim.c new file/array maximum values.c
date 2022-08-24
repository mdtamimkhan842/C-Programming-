#include <stdio.h>
int main ()
{
int a[4]= {30,-60,80,50};
int i,max;
max = a[0];
for (i=1; i<4; i++){
if (a[i]>max)
max = a[i];
}
printf ("enter the maximum values: %d\n", max);
return 0;
}
