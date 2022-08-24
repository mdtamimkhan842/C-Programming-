#include <stdio.h>
int main ()
{
int a, b, t, gcd;

scanf ("%d%d", &a, &b);
while (a!=b){ // 5 3
if (a>b)  // 5>3
a= a-b; // a= 5-3
else
b= b-a; //b = 3-5

}
printf ("Gcd is: %d\n", a);

return 0;
}
