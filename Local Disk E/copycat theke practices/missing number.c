#include <stdio.h>
int main ()
{
long long int a,b,c,d, i;
scanf("%lld", &a);
scanf("%lld %lld %lld", &b, &c,&d);

i= a-(d+b+c);

printf("%lld\n", i);

return 0;
}
