#include <stdio.h>
int main ()
{
int A, a, b,c;
scanf ("%d", &A);
if (A<200000000){
a= A%1000;
A= A/1000;
b= A%1000;
A= A/1000;
c= A%1000000;

printf ("%d,%d,%d", c, b,a);
}
return 0;
}
