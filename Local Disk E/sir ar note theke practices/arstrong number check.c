#include <stdio.h>
int main ()
{
int n, r, sum=0, temp;
printf ("enter the value: ");
scanf ("%d", &n);

temp= n;//153
while (n>0){
r= n%10;//3.5
sum = sum+ (r*r*r);//27+125
n= n/10;//15, 5
}
if (temp==sum)
printf ("armstrong number\n");
else
printf ("not armstrong number\n");

return 0;
}

