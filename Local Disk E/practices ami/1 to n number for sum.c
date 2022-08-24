#include <stdio.h>
int main ()
{
int i, summation=0;
long long int N;
scanf ("%lld", &N);
for (i=0; i<=N; i++)
summation= summation+i;
printf ("%d", summation);
return 0;
}
