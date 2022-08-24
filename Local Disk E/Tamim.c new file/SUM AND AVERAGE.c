#include <stdio.h>
int main ()
{
    int a[4]= {15,5,25,4}, sum=0, i;
    float average;
    for (i=0; i<4; i++)
    {
        sum = sum+a[i];
        average = sum /2.5;
    }

    printf ("%d\n", sum);
    printf ("%.2f\n", average);

    return 0;
}
