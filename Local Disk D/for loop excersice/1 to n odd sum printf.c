#include <stdio.h>
int main ()
{
int i, sum=0, n;

scanf ("%d", &n);
for (i=1; i<=n; i++){
if (i%2==!0)
sum= sum+i;
}
printf ("sum is: %d\n", sum);


return 0;
}
