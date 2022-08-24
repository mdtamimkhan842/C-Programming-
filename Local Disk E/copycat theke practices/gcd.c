#include <stdio.h>
int main ()
{
int a, b, t, gcd;

scanf ("%d%d", &a, &b); // 3 5

//if (a==0) gcd=a;
//else if (b==0) gcd=b;

//else{
while (b!=0){ // 3
//t=b;  // t=3
b= a%b;  // 1
a=b; // 1
}
gcd=a;
//}
printf ("Gcd is: %d\n", gcd);

return 0;
}
