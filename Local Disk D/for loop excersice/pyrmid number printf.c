#include <stdio.h>
int main ()
{
    int i, j, k, n=4, m=1;


    for (i=1; i<=4; i++)
    {
        for (j=i; j<=(4-i); j++)
        {
            printf ("  ");
        }
        for (k=1; k<=i; k++)
        {
            printf ("%d", m++);
        }
        printf("\n");
    }

    return 0;
}
