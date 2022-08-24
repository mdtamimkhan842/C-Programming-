#include <stdio.h>
int main ()
{
int i, n, sum=0;
float ave;

scanf ("%d", &n);

for (i=1; i<=n; i++){
sum = sum+ i;
ave = sum/n;
}
printf ("summation: %d\n", sum);
printf ("Average is: %0.2lf", ave);

return 0;
}
