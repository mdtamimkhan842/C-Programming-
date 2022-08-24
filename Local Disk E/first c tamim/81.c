#include <stdio.h>
int main ()
{
int x [3][3], i, j, sum=0;

for(i=0; i<3; i++){
for (j=0; j<3; j++){
scanf ("%d", &x[i][j]);

printf ("%d\n", x[i][j]);
sum = sum + x[i][j];

}
}
float average = sum/9.00;
printf ("enter the average: %f2\n", average);
return 0;
}
