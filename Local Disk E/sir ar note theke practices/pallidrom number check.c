#include <stdio.h>
int main ()
{
int n, r, temp, sum=0;

printf ("Enter are a value:");
scanf ("%d", &n);

temp = n;

while (n!= 0)
{
r = n%10;
sum = sum*10+r;
n = n/10;
}
if (temp == sum)
    printf ("n is  pallindrom number");
else
    printf ("n is not pallindrom number");
return 0;
}

