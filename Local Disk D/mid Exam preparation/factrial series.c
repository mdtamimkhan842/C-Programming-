#include <stdio.h>
int main ()
{
int n, sum=0, i,k ;
printf ("enter a factriol number:");
scanf ("%d", &n);

for (i=1; i<=n; i++){
sum = sum +(1/i);
if (i==1)
printf ("\n1 + ");
else if (i==n)
printf ("(1/%d), i");
else
printf ("(1/%d) + ", i);
}

printf ("= %d\n", sum);


return 0;
}
