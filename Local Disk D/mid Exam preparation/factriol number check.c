#include <stdio.h>
int main ()
{
int n, fact=1, i ;
float sum=0,k;
printf ("enter a factriol number:");
scanf ("%d", &n);

for (i=1; i<=n; i++){
fact = fact*i;
sum= sum+((i*1.0)/fact);
printf ("%0.2f\n", sum);

}


return 0;
}
