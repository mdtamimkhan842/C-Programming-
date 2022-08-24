#include <stdio.h>
int main ()
{
int a[10];
int i, sum =0;
printf ("entet the array:");
for (i=0; i<10; i++){
scanf ("%d", &a[i]);
}
for (i=0; i<10; i++){
sum = sum + a[i];
}

printf ("%d\n", sum);

return 0;
}
