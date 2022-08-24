#include <stdio.h>
int main ()
{
int r, temp, sum=0;
int n;

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
    printf ("Yes");
else
    printf ("No");
    return 0;
}

