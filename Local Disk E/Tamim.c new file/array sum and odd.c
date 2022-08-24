#include <stdio.h>
int main ()
{
int a [5], i, even_sum=0, odd_sum=0;

printf ("enter the arrays:");
for (i=0; i<5; i++){
scanf ("%d", &a[i]);
}
for (i=0; i<5; i++){
printf ("enter the arrays: %d\n", a[i]);

if (a[i] % 2 ==0)
    even_sum = even_sum+a[i];
else
    odd_sum= odd_sum+ a[i];
}
printf ("enen_sum array is: %d\n", even_sum);
printf ("odd_sum array is: %d\n", odd_sum);

return 0;
}
