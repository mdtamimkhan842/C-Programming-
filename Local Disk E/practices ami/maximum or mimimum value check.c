#include <stdio.h>
int main ()
{
long long int A, B,C;
scanf ("%lld %lld %lld", &A, &B, &C);

if (A>B || A>C){
printf ("%lld", A);
}else if (B>A || B>C){
printf ("%lld", B);
}else {
printf ("%lld", C);
}



return 0;
}
