#include <stdio.h>
int main ()
{
    int  a,b, temp, r, n,m;
    printf ("Enter two values: ");
    scanf ("%d%d", &a, &b);
    m= a*b;//10 20
    if (b>a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    do
    {
        r = a%b;//0.5
        a=b;//0.5
        b = r;//0.5
    }
    while (r!=0);
    printf ("HCF : %d\n", a);
    n= m*a;
    printf ("LCM: %d\n", n);

    return 0;
}

