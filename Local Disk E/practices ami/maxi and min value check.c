#include <stdio.h>
int main (){
long long int  A,B,C;
scanf ("%lld %lld %lld", &A, &B, &C);
long long int maximum, minimum;
minimum =A;
if (B<minimum) minimum =B;
if (C<minimum) minimum =C;
printf ("%lld ", minimum);

maximum = A;
if (B> maximum)  maximum =B;
if (C> maximum)  maximum =C;
printf ("%lld",  maximum);


return 0;
}
