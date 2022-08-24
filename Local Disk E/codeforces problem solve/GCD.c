#include <stdio.h>
int main ()
{
int t;
int a, b, gcd, i;

scanf("%d", &t);
while(t--)
{

scanf("%d %d",  &a, &b);//3 5

for (i=1; i<=a && i<=b; i++){
    if(a%i==0 && b%i==0)
        gcd=i;
}
printf("%lld\n", gcd);
printf("%lld\n", ++gcd);


}
return 0;
}
