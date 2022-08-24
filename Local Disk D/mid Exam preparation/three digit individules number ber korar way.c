#include <stdio.h>
int main ()
{
int a,b,c, sum, n;
printf ("Enter the values: ");
scanf ("%d", &n);

a= n/100;//200=2
b= (n %100)/10; //200%100= 0
c= n/10;//200/10=20

sum = a+b+c;

printf ("sum is: %d", sum);


return 0;
}
