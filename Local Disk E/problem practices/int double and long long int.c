#include <stdio.h>
#include <conio.h>
int main ()
{
    int i;
    char ch;
    double d;
    long long int b;
    float a;
    double k;

    scanf("%d%lld", &i, &b);
    scanf("%c%f%lf", &ch, &a, &k);
    printf("%d\n", i);
    printf("%lld\n", b);
    printf("%c\n", ch);
    printf("%0.2f\n", a);
    printf("%0.2lf\n", k);




    return 0;
}


