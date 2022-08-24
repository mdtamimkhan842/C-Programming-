#include <stdio.h>
int main ()
{
int a,b, i, n;
printf ("Enter two values: ");
scanf ("%d%d", &a,&b);//5 3

for (i=1; i<=a && i<=b; i++){
    if (a%i==0 && b%i==0){//1 5, 1 3
        n=i;
            }
}
printf ("GCD is: %d\n", n);

return 0;
}

