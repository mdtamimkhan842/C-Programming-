#include <stdio.h>
int main ()
{
int Y;

scanf("%d", &N);

if (N%400==0)
printf("Yes");
else if (Y%4==0 && Y%100!=0)
printf("Yes");
else
printf("No");


return 0;
}
