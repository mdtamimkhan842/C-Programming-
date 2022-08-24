#include <stdio.h>
int main ()
{
int a[5], i, sum = 0;
printf ("the values in the array: %d");
for (i=0; i<5; i++){
scanf ("%d", &a[i]);
}
for (i=0; i<5; i++){
sum = sum + a[i];
}
printf ("the values in the array: %d\n", sum);
return 0;
}
