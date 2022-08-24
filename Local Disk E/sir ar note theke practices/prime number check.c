#include <stdio.h>
int main ()
{
int i, n, c=0;

printf("enter the value: ");
scanf ("%d", &n);

for (i=2; i<n; i++){//10
if (n%i==0){//10/2, 2 3 5 7
c++;
break;
}
}
if (c==0){
printf ("n is a prime number");
}else{
printf ("n is not a prime number");
}

return 0;
}
