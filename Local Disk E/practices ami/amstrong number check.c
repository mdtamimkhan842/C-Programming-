#include <stdio.h>
int main ()
{
int n,r,temp, s=0;
printf ("Enter value:");
scanf ("%d", &n);

temp = n;
while (n!=0){

r = n %10;
s= s+r*r*r;
n = n/10;
}
if (s==temp){
printf ("n is amstrong number");
}else {
printf ("n is not amstrong number");
}


return 0;
}
