#include <stdio.h>
int main ()
{
    int i, j, k, m, n;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (k=n; k>=i; k--)
        {
            printf(" ");
        }
        for (j=1; j<=i; j++)
        {
            printf ("*");
        }
        for (m=2; m<=i; m++)
        {
            printf("*");
        }
        printf ("\n");
    }


    return 0;
}
