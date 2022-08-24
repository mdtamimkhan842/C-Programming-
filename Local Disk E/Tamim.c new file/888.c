#include <stdio.h>
int main ()
{
int i, sum = 0;
float average;
for (i=1; i<=10; i++){
printf ("%d", i);
printf (" ");
sum = sum + i;
}
printf ("\n");
printf ("%d", sum);
for (i=1; i<=10; i++){
average = sum/10.00;
printf ("%f", average);
}
return 0;
}
